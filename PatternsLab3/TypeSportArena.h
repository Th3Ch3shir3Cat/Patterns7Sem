#pragma once
#include <iostream>
#include <string>

using namespace std;

class TypeSportArena {
protected:

	string name;

public:
	TypeSportArena(string name) {
		this->name = name;
	}

	void print(string city) {
		cout << "����� " + this->name + " � ������: " + city << endl;
	}
};