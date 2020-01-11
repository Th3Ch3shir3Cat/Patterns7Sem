#pragma once
#include <iostream>
#include "ICommonFunction.h"
#include "ControlSystem.h"

using namespace std;

class ProtectProxyControl : public ICommonFunction {
private:

	ControlSystem* control;

public:

	ProtectProxyControl(SoldTickets* stickets) {
		this->control = new ControlSystem(stickets);
	}

	virtual bool SearchTicket(Ticket *ticket) {
		if (control->SearchTicket(ticket))
			return true;
		return false;
	}

	virtual void CancelTicket(){}
	virtual void MakePayment(){}
	virtual void FillDetails(){}

	~ProtectProxyControl() {
		delete control;
	}
};