#pragma once
#include <iostream>
#include "Ticket.h"


class Builder {
protected:
	Ticket* ticket;

public:

	virtual void createTicket() {}
	virtual void setTypeSport() {}
	virtual void setPrice() {}
	virtual void setSportArena() {}
	virtual void setEvents() {}
	virtual void setSector() {}
	virtual Ticket* getTicket() { return ticket; }
};