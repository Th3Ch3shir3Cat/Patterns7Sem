#pragma once
#include "sale.h"

class AbstractFabrica {
public:
	virtual ISale* getPay() = 0;
};