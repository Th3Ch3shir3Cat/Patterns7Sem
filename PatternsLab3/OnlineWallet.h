#pragma once

#include <iostream>
#include <string>

using namespace std;

class OnlineWallet {
private:
	string FIO;
	int num_wallet;

public:
	OnlineWallet(string FIO, int num) {
		this->FIO = FIO;
		this->num_wallet = num;
	}

	void payForTicket() {
		cout << "Оплата через онлайн кошелёк" << endl;
	}
};