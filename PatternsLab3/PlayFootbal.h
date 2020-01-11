#pragma once
#include "Play.h"

class PlayFootbal : public Play {
public:
	PlayFootbal(Players* pl) : Play(pl) {}
	void execute() {
		plrs->playFoorbal();
	}
};