#include <string>
#include "User.h"
using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H


class Vehicle
{
public:
	Vehicle(string m, string p, User d, double i) : model(m), plate(p), Driver(d), mileage(i) {}
	//Getters
	virtual string getModel(){ return model; }
	virtual User getDriver(){ return Driver; }
	virtual string getPlate(){ return plate; }	
	virtual double getMileage(){ return mileage; }
		
	//Setters
	virtual void setModel(string m){ model = m; }
	virtual void setDriver(const User &d){ Driver = d; }
	virtual void setPlate(string i){ plate = i; }
	virtual void setMileage(double m){ mileage = m; }

	virtual void print() = 0;		//pure abstract function - polymorphism

private:
	string model;
	User Driver;					//composition
	string plate;
	double mileage;
	char type;
};

#endif