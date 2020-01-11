#pragma once

#include "Ticket.h"

using namespace std;

class ICommonFunction {

public:
	
	virtual bool SearchTicket(Ticket * ticket) = 0;
	virtual void CancelTicket() = 0;
	virtual void MakePayment() = 0;
	virtual void FillDetails() = 0;

};