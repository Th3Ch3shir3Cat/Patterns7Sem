#pragma once

#include "Strategy.h"
#include "AbstractFabrica.h"
#include "shoppingBascet.h"
#include "NalFabrica.h"
#include "OnlineFabrica.h"
#include "card.h"
#include "adapter.h"
#include <ctime>

using namespace std;

class BronPay : public Strategy {
private:

	AbstractFabrica* factory;
	shoppingBascet shopbask;
	

public:

	void doSomethings(Ticket* t) {
		int CLOCKS_PER_MSEK = CLOCKS_PER_SEC / 1000;
		clock_t end_time = clock() + 10000 * CLOCKS_PER_MSEK;
		cout << end_time << endl;
		if (!t->getState()) {
			while (clock() != end_time) {}
			cout << "�����" << endl;
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