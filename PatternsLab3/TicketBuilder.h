#pragma once

#include "Builder.h"
#include <iostream>

using namespace std;

class TicketBuilder : public Builder{
public:
	void createTicket() {
		ticket = new Ticket();
	}
	void setSector(int numSec) {
		ticket->place = numSec;
	}
	void setPrice(int price) {
		ticket->price = price;
	}

	void setEvents() {

	}
	void setSportArena() {

	}
	void setTypeSport() {

	}
};