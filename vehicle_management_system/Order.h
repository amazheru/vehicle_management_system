#include "User.h"
#include "Loan.h"
#include "Business.h"
#include "Cargo.h"
#include "Vehicle.h"
#include <time.h>
#include <string>
using namespace std;

#ifndef ORDER_H
#define ORDER_H

class Order
{
public:
	Order(string, string, char, Vehicle*);
	char getType() { return type; }
	Vehicle* getCar() { return car; }
	void setTimeStart(string t){ timeS = t; }
	void setTimeEnd(string t){ timeE = t; }
	string getTimeStart() const { return timeS; }
	string getTimeEnd() const { return timeE; }
	bool operator<(const Order &o);
	void print();
private:
	string timeS;
	string timeE;
	char type;
	Vehicle *car;
};

#endif