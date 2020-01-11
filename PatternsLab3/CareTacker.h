#pragma once
#include "Snapshot.h"

class CareTaker {
private:
	Snapshot* backup;

public:

	void makeBackUp(Ticket *builder) {
		backup = builder->makeSnapshot();
	}

	void undo() {
		if (backup != NULL) {
			backup->restore();
		}
	}
};