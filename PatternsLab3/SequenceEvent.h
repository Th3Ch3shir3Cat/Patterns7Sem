#pragma once

#include <string>

using namespace std;

class SequenceEvent {
public:
	virtual void setEvents(string) = 0;
	virtual string getEvents() = 0;
};