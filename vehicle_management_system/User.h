#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

#ifndef USER_H
#define USER_H


class User
{
public:
	User(string i, string f, string l) : ID(i), fName(f), lName(l) {}

	//Getters
	string getFirst() const { return fName; }
	string getLast() const { return lName; }
	string getID() const { return ID; }

	//Setters
	void setFirst(string f) { fName = f; }
	void setLast(string l) { lName = l; }
	void setID(string i) { ID = i; }
	bool operator==(string u){ return this->ID == u; }

	void print() { cout <<setw(8)<< ID << setw(20) << fName << setw(20) << lName; }

private:
	string fName;
	string lName;
	string ID;
};

#endif