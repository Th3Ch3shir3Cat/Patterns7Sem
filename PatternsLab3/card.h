#pragma once

#include "payOnline.h"
#include <string>

using namespace std;

class card : public payOnline {
private:
	int number_card;
	string FIO_user;

public:
	card(int num, string FIO/*, ReciverPay* p) : payOnline(p*/) {
		this->number_card = num;
		this->FIO_user = FIO;
	}

	void buyTicket() {
		cout << "Pay for card" << endl;
		//pRec->payThrowCard();
		
	}
};