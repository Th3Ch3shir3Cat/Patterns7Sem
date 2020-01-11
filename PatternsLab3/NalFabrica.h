#pragma once
#include "payNal.h"
#include "AbstractFabrica.h"

class NalFabrica :public AbstractFabrica {
public:
	payNal* getPay() {
		return new payNal;
	}
};