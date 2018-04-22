#include "Loan.h"
#include "User.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

Loan::Loan(string m, string p, User d, double i, string IC, string IP)
	: Vehicle(m, p, d, i)
{
	insuranceCompany = IC;
	insurancePolicy = IP;
}

void Loan::print()
{
	User temp = getDriver();
	temp.print();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << endl << endl << setw(30) << "\t| Vehicle Model |" << setw(18) << "License Plate |" << setw(10) << "Miles |" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << setw(30) << getModel() << setw(18) << getPlate() << setw(10) << getMileage() << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << setw(35) << "\t\t|\t Additional Data \t|" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << setw(35) << getIC() << setw(7) << "PN: " << getIP() << endl << endl << endl;
}