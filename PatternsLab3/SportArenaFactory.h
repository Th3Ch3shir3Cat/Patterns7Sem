#pragma once
#include "TypeSportArena.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class SportArenaFactory {

	map<string,TypeSportArena*> arenas;


public:
	TypeSportArena* getSportArena(TypeSportArena* arena, string name) {
		map<string, TypeSportArena*>::iterator it = arenas.find(name);
		if (it == arenas.end()) {
			TypeSportArena *newArenas = new TypeSportArena(name);
			arenas.insert(make_pair(name, newArenas));
			return newArenas;
		}
		return NULL;
	}
};