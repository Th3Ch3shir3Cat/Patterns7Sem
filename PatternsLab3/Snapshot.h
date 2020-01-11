#pragma once

#include "Ticket.h"

class Snapshot {
private:
	Ticket* bbuilder;
	int place;
	int price;

public:
	Snapshot(Ticket *bbbuilder, int place, int price) {
		this->bbuilder = bbbuilder;
		this->place = place;
		this->price = price;
	}

	void restore() {
		bbuilder->setPrice(price);
		bbuilder->setPlace(place);
	}
};