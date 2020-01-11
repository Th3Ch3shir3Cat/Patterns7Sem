#pragma once

#include "ICollectionTicket.h"
#include "Ticket.h"
#include <vector>

using namespace std;

class SoldTickets : public ICollectionTicket {

private:
	
	vector<Ticket*>tickets;

public:
	void collectTicket(Ticket *ticket) {
		this->tickets.push_back(ticket);
	}

	bool findTicket(Ticket* ticket) {
		for (int i = 0; i < tickets.size(); i++) {
			if (tickets[i]->getPlace() == ticket->getPlace())
				return false;
		}
		return true;
	}

};