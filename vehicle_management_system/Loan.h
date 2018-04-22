#include "Vehicle.h"
#include <string>
using namespace std;

#ifndef LOAN_H
#define LOAN_H

class Loan : public Vehicle			//public inheritance
{
public:
	Loan(string, string, User, double, string, string);
	//Getters based on polymorphism
	virtual string getModel(){ return Vehicle::getModel(); }
	virtual User getDriver(){ return Vehicle::getDriver(); }
	virtual string getPlate(){ return Vehicle::getPlate(); }
	virtual double getMileage(){ return Vehicle::getMileage(); }
	string getIC(){ return insuranceCompany; }
	string getIP(){ return insurancePolicy; }
	

	//Setters based on polymorphism
	virtual void setModel(string m){ Vehicle::setModel(m); }
	virtual void setDriver(const User &d){ Vehicle::setDriver(d); }
	virtual void setID(string i){ Vehicle::setPlate(i); }
	virtual void setMileage(double m){ Vehicle::setMileage(m); }
	void setIC(string c){ insuranceCompany = c; }
	void setIP(string p){ insurancePolicy = p; }

	virtual void print();

private:
	string insuranceCompany;
	string insurancePolicy;
	char type = 'l';
};

#endif