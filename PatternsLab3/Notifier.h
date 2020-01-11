#pragma once

#include <iostream>
#include <string>

using namespace std;

class Notifier {
public:
	virtual void send() = 0;
};