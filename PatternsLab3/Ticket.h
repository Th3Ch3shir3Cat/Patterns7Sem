//
// Created by gerbe on 20.11.2019.
//

#ifndef LABA3_TICKET_H
#define LABA3_TICKET_H

#include <iostream>


using namespace std;

class Snapshot {
private:
	Ticket* bbuilder;
	int place;
	int price;

public:
	Snapshot(Ticket* bbbuilder, int place, int price) {
		this->bbuilder = bbbuilder;
		this->place = place;
		this->price = price;
	}

	void restore() {
		bbuilder->setPrice(price);
		bbuilder->setPlace(place);
	}
};

class Ticket {

public:

	int place;
	int price;
	class State* current;
	bool st;
	Ticket() {

	}
	Ticket(int place, int price);

	void setState(State* state) {
		current = state;
	}

	bool getState() {
		return this->st;
	}

	Snapshot * makeSnapshot(){
		return new Snapshot(this,place,price);
	}

	void free();

	void NotFree();

	void setPlace(int place) {
		this->place = place;
	}
	void setPrice(int price) {
		this->price = price;
	}

	int getPlace() {
		return this->place;
	}

	int getPrice() {
		return this->price;
	}
};

class State {

public:

	virtual void free(Ticket* t) {
		t->st = true;
		cout << "Ticket free" << endl;
	}

	virtual void NotFree(Ticket* t) {
		t->st = false;
		cout << "Ticket not Free!!!" << endl;
	}
};

void Ticket::free() {
	current->free(this);
}

void Ticket::NotFree() {
	current->NotFree(this);
}

class Free : public State {
public:
	Free() {
		cout << " Free state" << endl;
	}
	void NotFree(Ticket* t);
};

class notFree : public State {
public:
	notFree() {
		cout << "notFree state " << endl;
	}

	void free(Ticket* t) {
		t->st = true;
		t->setState(new Free());
	}

};

void Free::NotFree(Ticket *t) {
	t->st = false;
	t->setState(new notFree());
	delete this;
}

Ticket::Ticket(int place, int price) {
	this->place = place;
	this->price = price;
	current = new Free();
	st = true;
}




class CareTaker {
private:
	Snapshot* backup;

public:

	void makeBackUp(Ticket* builder) {
		backup = builder->makeSnapshot();
	}

	void undo() {
		if (backup != NULL) {
			backup->restore();
		}
	}
};

#endif //LABA3_TICKET_H
