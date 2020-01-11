#pragma once

#include "Ticket.h"

class ICollectionTicket {
public:
	virtual void collectTicket(Ticket *ticket) = 0;
};