#pragma once
#include "Play.h"

class PlayBascetbal : public Play {
public:

	PlayBascetbal(Players* pl) : Play(pl) {}

	void execute() {
		plrs->playBascetbal();
	}
};