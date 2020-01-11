#pragma once

#include <iostream>>
#include <string>
#include "payOnline.h"
#include "OnlineWallet.h"

using namespace std;

class adapter :public payOnline {
protected:
	OnlineWallet* wallet;

public:
	adapter(OnlineWallet* wallet/*, ReciverPay *p) : payOnline(p)*/) {
		this->wallet = wallet;
	}

	void buyTicket() {
		wallet->payForTicket();
		//pRec->payThrowAdapter(wallet);
	}
};