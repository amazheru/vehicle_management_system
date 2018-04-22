#ifndef BUSINESS_H
#define BUSINESS_H

#include "Vehicle.h"
#include "User.h"
#include <string>
using namespace std;

class Business : public Vehicle		//public inheritance
{
public:
	Business(string, string, User, double, int, string);
	//Getters based on polymorphism
	virtual string getModel(){ return Vehicle::getModel(); }
	virtual User getDriver(){ return Vehicle::getDriver(); }
	virtual string getPlate(){ return Vehicle::getPlate(); }
	virtual double getMileage(){ return Vehicle::getMileage(); }
	int getPN(){ return passNum; }
	string getPassengers() { return passengers; }

	//Setters based on polymorphism
	virtual void setModel(string m){ Vehicle::setModel(m); }
	virtual void setDriver(const User &d){ Vehicle::setDriver(d); }
	virtual void setPlate(string i){ Vehicle::setPlate(i); }
	virtual void setMileage(double m){ Vehicle::setMileage(m); }
	void setPN(int num){ passNum = num; }
	void setPassenger(string p){ passengers = p; }

	virtual void print();

private:
	int passNum;
	string passengers;
	char type = 'b';
};

#endif