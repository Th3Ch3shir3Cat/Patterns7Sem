//
// Created by gerbe on 20.11.2019.
//

#ifndef LABA3_PAYNAL_H
#define LABA3_PAYNAL_H


#include <iostream>
#include "sale.h"

class payNal: public ISale {
public:
    void buyTicket(){
        std::cout << "Nal pay" << std::endl;
    }
};


#endif //LABA3_PAYNAL_H
