#pragma once
#include <iostream>
#include "BaseDecorator.h"

class Sms : public BaseDecoration {

public:
	Sms(Notifier* notifier) : 
		BaseDecoration(notifier) {}

	void send() {
		BaseDecoration::send();
		cout << " Отправка через СМС" << endl;
	}
};