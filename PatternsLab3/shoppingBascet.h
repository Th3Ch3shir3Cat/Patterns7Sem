//
// Created by gerbe on 20.11.2019.
//

#ifndef LABA3_SHOPPINGBASCET_H
#define LABA3_SHOPPINGBASCET_H

#include "Ticket.h"
#include "sale.h"
#include <vector>
#include "ICollectionTicket.h"
#include "ProtectProxyControl.h"
#include "Notifier.h"
#include "Telega.h"
#include "BaseDecorator.h"
#include "MessageText.h"
#include "Sms.h"
#include "Mail.h"

using namespace std;

class shoppingBascet : public ICollectionTicket {
public:

	vector<Ticket>tickets;
	ISale *sales;
	
public:

	void collectTicket(Ticket *ticket) {
		tickets.push_back(*ticket);
	}

	void takeSale() {
		sales->buyTicket();
	}

	void choosePushMethod() {
		cout << "���� ������� ������\n1-���������\n2-���\n3-��� ��� ����.��\n4-��� �����" << endl;
		int type_choose;
		cin >> type_choose;
		if (type_choose == 1) {
			Notifier* notifier = new Telega(new MessageText("��������: "));
			notifier->send();
		}
		if (type_choose == 2) {
			Notifier* notifier = new Sms(new MessageText("��������: "));
			notifier->send();
		}
		if (type_choose == 3) {
			Notifier* notifier = new Mail(new MessageText("��������: "));
			notifier->send();
		}
		if (type_choose == 4) {
			Notifier* notifier = new BaseDecoration(new Telega(new Sms(new Mail(new MessageText("��������: ")))));
			notifier->send();
		}


	}

	void getAllPrice() {
		int price = 0;
		for (int i = 0; i < tickets.size(); i++) {
			price += tickets[i].getPrice();
		}
		cout << "����� ���� ������: " << price << endl;
	}

};

#endif //LABA3_SHOPPINGBASCET_H
