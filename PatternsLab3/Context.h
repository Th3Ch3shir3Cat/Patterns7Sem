#pragma once
#include "Strategy.h"

class Context {
private:
	Strategy* strat;

public:
	Context(Strategy* str) {
		strat = str;
	}

	void strategy(Ticket* t) {
		strat->doSomethings(t);
	}
};