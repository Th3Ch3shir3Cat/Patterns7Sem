#pragma once
#include <iostream>
#include <string>
#include "TypeSportArena.h"

using namespace std;

class SportArena {

protected:
	string city;
	TypeSportArena *typeArena;

public:
	SportArena(string city, TypeSportArena *typeArena) {
		this->city = city;
		this->typeArena = typeArena;
	}

	void print() {
		typeArena->print(city);
	}

};