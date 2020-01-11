#pragma once
#include "SequenceEvent.h"
#include <string>
#include "Event.h"
#include <vector>

using namespace std;

class CompoundEvents : public SequenceEvent {

protected:
	vector<SequenceEvent*> events;

public:
	void addEvent(Event* ev) {
		events.push_back(ev);
	}

	string getEvents() {
		string nameEvent = "";
		for (int i = 0; i < events.size(); i++) {
			nameEvent += events[i]->getEvents() + "\n";
		}
		return nameEvent;
	}

	void setEvents(string message) {
		cout << message + getEvents() << endl;
	}

};
