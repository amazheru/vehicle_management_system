#include "Order.h"
#include "User.h"
#include "Loan.h"
#include "Business.h"
#include "Cargo.h"
#include "Vehicle.h"
#include <Windows.h>
#include <time.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Order::Order(string timeS, string timeE, char t, Vehicle *c)
{
	this->timeS = timeS;
	this->timeE = timeE;
	type = t;
	car = c;
}

void Order::print()
{
	for (int i = 0; i < 80; i++)
		cout << "_";
	cout << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << "Order Start Time: " << timeS << "\n"
		<< "Order End Time: " << timeE << "\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << setw(20) << "V. Type | " << setw(10) << "Empl. ID |" << setw(20) << "First Name |" << setw(20) << "Last Name | " << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	if (type == 'c')
		cout << setw(17) << "Cargo";
	else if (type == 'b')
		cout << setw(17) << "Business";
	else if (type == 'l')
		cout << setw(17) << "Loan";

	car->print();
}

bool Order::operator<(const Order &o)
{
	return timeS < o.getTimeStart();
}