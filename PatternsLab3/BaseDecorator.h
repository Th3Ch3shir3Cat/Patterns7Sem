#pragma once
#include <iostream>
#include <string>
#include "Notifier.h"

using namespace std;

class BaseDecoration :public Notifier {
private:
	Notifier* notifier;

public:
	BaseDecoration(Notifier* notifier) {
		this->notifier = notifier;
	}

	void send() {
		notifier->send();
	}
};