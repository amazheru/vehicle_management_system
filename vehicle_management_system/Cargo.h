#include <string>
#include "Vehicle.h"
using namespace std;

#ifndef CARGO_H
#define CARGO_H

class Cargo : public Vehicle		//public inheritance
{
public:
	Cargo(string, string, User, double, double, string);
	//Getters based on polymorphism
	virtual string getModel(){ return Vehicle::getModel(); }
	virtual User getDriver(){ return Vehicle::getDriver(); }
	virtual string getPlate(){ return Vehicle::getPlate(); }
	virtual double getMileage(){ return Vehicle::getMileage(); }
	double getWeight(){ return weight; }
	string getCargo(){ return cargo; }

	//Setters based on polymorphism
	virtual void setModel(string m){ Vehicle::setModel(m); }
	virtual void setDriver(User d){ Vehicle::setDriver(d); }
	virtual void setPlate(string i){ Vehicle::setPlate(i); }
	virtual void setMileage(double m){ Vehicle::setMileage(m); }
	void setWeight(double w){ weight = w; }
	void setCarg(string c){ cargo = c; }

	virtual void print();

private:
	double weight;
	string cargo;
	char type = 'c';
};

#endif