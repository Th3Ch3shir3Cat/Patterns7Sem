#pragma once
#include "Ticket.h"


class Strategy {
public:
	virtual void doSomethings(Ticket *t) = 0;
};