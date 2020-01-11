#pragma once
#include <iostream>
#include "BaseDecorator.h"

class Mail : public BaseDecoration {

public:
	Mail(Notifier* notifier):
		BaseDecoration(notifier){}

	void send() {
		BaseDecoration::send();
		cout << " Отправка черезе Майл" << endl;
	}
};