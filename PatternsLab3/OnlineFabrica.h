#pragma once
#include "AbstractFabrica.h"
#include "payOnline.h"

class OnlineFabrica : public AbstractFabrica {
public:
	payOnline * getPay() {
		return new payOnline;
	}
};