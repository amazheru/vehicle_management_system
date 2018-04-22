#include "Order.h"
#include <list>
#include <string>
using namespace std;

#ifndef MENU_H
#define MENU_H

class Menu
{
public:
	Menu() : currUser("i", "f", "l") {}
	int welcome();
	void getEmployees();
	void getHistory();
	int options();
	string chooseType(int);
	void displayEmployees();
	User addEmployee();
	void displayHistory(string);
	void placeOrder(string);
	string properDate(string date);
	bool isProperDate(string date);
private:
	list<Order> History;		//composition, STL
	list<User> Employees;		//composition, STL
	User currUser;				//composition
};

#endif