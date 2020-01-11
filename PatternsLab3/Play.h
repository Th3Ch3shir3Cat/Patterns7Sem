#pragma once
#include "Players.h"

class Play {
public:
	virtual void execute() = 0;

protected:
	Play(Players* pl) : plrs(pl) {}
	Players* plrs;
};