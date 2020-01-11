#pragma once

#include <string>
#include <iostream>
#include "shoppingBascet.h"

using namespace std;

class Buyer {

private:
	string FIO;
	string Phone;
	shoppingBascet *basket;
	char male;

public:
	Buyer(string FIO, string Phone, shoppingBascet* basket, char male){
		this->FIO = FIO;
		this->Phone = Phone;
		this->basket = basket;
		this->male = male;
	}

};