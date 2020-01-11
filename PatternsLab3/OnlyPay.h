#pragma once
#include "Strategy.h"


class OnlyPay : public Strategy{
private:

	AbstractFabrica *factory;
	shoppingBascet shopbask;

public:

	void doSomethings(Ticket* t) {
		if (!t->getState()) {
			t->setState(new notFree);

			int type_pay;
			cout << "�������� ������ ������:\n1-��������\n2-����������� ������\n" << endl;
			cin >> type_pay;
			if (type_pay == 1) {
				factory = new NalFabrica;
			}
			else
				factory = new OnlineFabrica;

			shopbask.sales = factory->getPay();
			shopbask.takeSale();
			cout << "1-������ ������\n2-������ �/� �������\n" << endl;
			cin >> type_pay;
			if (type_pay == 1) {
				card* cd = new card(1111, "������� ������� ��������");
				cd->buyTicket();
			}
			else {
				adapter* ad = new adapter(new OnlineWallet("������� ������� ��������", 123));
				ad->buyTicket();
			}
		}
		else
			cout << "����� �����" << endl;
	}

};