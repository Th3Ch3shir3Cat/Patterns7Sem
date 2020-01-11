//
// Created by gerbe on 20.11.2019.
//

#ifndef LABA3_PAYONLINE_H
#define LABA3_PAYONLINE_H


#include <iostream>
#include "sale.h"
#include "ReciverPay.h"

class payOnline : public ISale {
public:

    void buyTicket(){
        std::cout << "Online pay" << std::endl;
    }

protected:
	/*payOnline(ReciverPay* p) : pRec(p) {}
	ReciverPay* pRec;*/
};


#endif //LABA3_PAYONLINE_H
