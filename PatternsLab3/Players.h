#pragma once
#include <iostream>
#include <string>
#include "ProtPlayers.h"

using namespace std;

class Players:ProtPlayers {
	
	string Name;
public:
	Players(string Name) :ProtPlayers(Name) {
		cout << Name << endl;
	}

	ProtPlayers* clone() {
		return new Players(*this);
	}

	void playFoorbal() {
		cout << "Play Foorbal" << endl;
	}

	void playBascetbal() {
		cout << "Play Bascetbal " << endl;
	}

};