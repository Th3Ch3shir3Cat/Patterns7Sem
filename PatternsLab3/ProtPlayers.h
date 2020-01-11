#pragma once
#include <iostream>
#include <string>

using namespace std;

class ProtPlayers {
protected:
	string Name;
	
public:

	ProtPlayers(string Name) {
		this->Name = Name;
	}

	ProtPlayers(const ProtPlayers* player) {
		this->Name = player->Name;
	}

	virtual void feed() {
		cout << Name << endl;
	}

	virtual ProtPlayers *clone() = 0;

};