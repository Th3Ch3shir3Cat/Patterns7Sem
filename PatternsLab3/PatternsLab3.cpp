// PatternsLab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include "shoppingBascet.h"
#include "Buyer.h"
#include <string>
#include "payNal.h"
#include "payOnline.h"
#include "SoldTickets.h"
#include "ProtectProxyControl.h"
#include "card.h"
#include "adapter.h"
#include "SequenceEvent.h"
#include "CompoundEvents.h"
#include "AllSportArena.h"
#include "NalFabrica.h"
#include "OnlineFabrica.h"
#include "Players.h"
#include "Director.h"
#include "TicketBuilder.h"
#include "Builder.h"
#include "Strategy.h"
#include "Context.h"
#include "OnlyPay.h"
#include "BronPay.h"
#include "Play.h"
#include "PlayBascetbal.h"
#include "PlayFootbal.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	
	Director dir;
	TicketBuilder builder;
	Ticket *ticket = dir.getTicket(builder, 15,12);
	
	cout << ticket->getPlace() << endl;



	shoppingBascet shopbask;
	SoldTickets tickets;
	Buyer buyer("Alex", "89998887766", &shopbask, 'M');
	AbstractFabrica* factory;
	ICommonFunction* controls = new ProtectProxyControl(&tickets);
	
	if (!controls->SearchTicket(ticket)) {
		Context* p = new Context(new BronPay);
		p->strategy(ticket);
		/*
		ticket->setState(new notFree);
		shopbask.collectTicket(ticket);
		tickets.collectTicket(ticket);
		int type_pay = 0;
		cout << "Выберите способ оплаты:\n1-Наличные\n2-Безналичный расчет\n" << endl;
		cin >> type_pay;
		if (type_pay == 1) {
			factory = new NalFabrica;
			shopbask.sales = factory->getPay();
			shopbask.takeSale();
		}
		else {
			factory = new OnlineFabrica;
			shopbask.sales = factory->getPay();
			cout << "1-Оплата картой\n2-Оплата ч/з кошелек\n" << endl;
			cin >> type_pay;
			if (type_pay == 1) {
				card *cd = new card(1111,"Хаустов Герберт Игоревич");
				cd->buyTicket();
			}
			else {
				adapter *ad = new adapter(new OnlineWallet("Хаустов Герберт Игоревич",123));
				ad->buyTicket();
			}
			shopbask.takeSale();
		}
	*/}
	else
		cout << "NO PAY!!!" << endl;
	shopbask.choosePushMethod();
	CompoundEvents* events = new CompoundEvents();
	Event* event = new Event();
	event->setEvents("Спартак - Зенит");
	events->addEvent(event);
	event = new Event();
	event->setEvents("ПСЖ-Монако");
	events->addEvent(event);
	events->setEvents("Список событий:\n");

	AllSportArena *arenas = AllSportArena::getInstance();
	AllSportArena *arenass = AllSportArena::getInstance();

	arenas->plantArenas("Барнаул", "Во имя великого меня");
	arenas->plantArenas("Барнаул", "Во имя великого меня");
	arenas->printAllArenas();
	
	ticket = new Ticket(6,25);
	shopbask.getAllPrice();

	Players* player = new Players("Крутые ребята");
	ProtPlayers* player2 = player->clone();
	player2->feed();

	vector<Play*> p;
	p.push_back(new PlayBascetbal(*&player));

	for (int i = 0; i < p.size(); i++) {
		p[i]->execute();
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
