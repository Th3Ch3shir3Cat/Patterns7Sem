#pragma once
#include "SequenceEvent.h"
#include <iostream>

using namespace std;

class Event : public SequenceEvent {

protected:
	string Nameevent;

public:
	void setEvents(string Nameevent) {
		this->Nameevent = Nameevent;
	}

	string getEvents() {
		return this->Nameevent;
	}
};