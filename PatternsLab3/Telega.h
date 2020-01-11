#pragma once
#include <iostream>
#include "BaseDecorator.h"

class Telega : public BaseDecoration{

public:
	Telega(Notifier* notifier) :
		BaseDecoration(notifier) {}

	void send() {
		BaseDecoration::send();
		cout << " Отправка через телегу" << endl;
	}

};