#pragma once
#include "Ticket.h"
#include "TicketBuilder.h"

class Director {
public:
	Ticket* getTicket(TicketBuilder & ticket, int price, int place) {
		ticket.createTicket();
		ticket.setPrice(price);
		ticket.setSector(place);
		return (ticket.getTicket());
	}
};