#pragma once

#include "ICommonFunction.h"
#include "Ticket.h"
#include "SoldTickets.h"
#include <vector>

using namespace std;

class ControlSystem : public ICommonFunction {

public:

	SoldTickets* stickets;
	

	ControlSystem(SoldTickets* stickets) {
		this->stickets = stickets;
	}

	virtual bool SearchTicket(Ticket *ticket) {
		if (stickets->findTicket(ticket))
			return false;
		return true;
	}

	virtual void CancelTicket() {}
	virtual void MakePayment() {}
	virtual void FillDetails() {}

};