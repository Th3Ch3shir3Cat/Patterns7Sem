#pragma once
#include <iostream>
#include <string>
#include "SportArena.h"
#include <vector>
#include "SportArenaFactory.h"

using namespace std;


class AllSportArena {


	static AllSportArena* instance;
	SportArenaFactory allType;
	vector<SportArena*> sportArenas;

	AllSportArena() {
	}


public:


	void plantArenas(string city, string name) {
		TypeSportArena* newArena = new TypeSportArena(name);
		TypeSportArena* type = allType.getSportArena(newArena, name);
		if (type == NULL)
			cout << "Арена уже имеется" << endl;
		else {
			SportArena* arena = new SportArena(city,type);
			sportArenas.push_back(arena);
		}
	}

	void printAllArenas() {
		for (int i = 0; i < sportArenas.size(); i++) {
			sportArenas[i]->print();
		}
	}
	
	static AllSportArena *getInstance() {
		if (instance == NULL) {
			instance = new AllSportArena();
		}
		else
			cout << " Object alredy exist " << endl;
		return instance;
	}
};