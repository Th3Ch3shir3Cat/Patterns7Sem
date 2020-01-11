#pragma once
#include "Notifier.h";
#include <string>

class MessageText :public Notifier {
protected:
	string message;

public:
	MessageText(string message){
		this->message = message;
	}

	void send() {
		cout << "Message: " + message << endl;
	}
};