#include "Cargo.h"
#include "User.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

Cargo::Cargo(string m, string p, User d, double i, double w, string c)
	: Vehicle(m, p, d, i)
{
	weight = w;
	cargo = c;
}

void Cargo::print()
{
	User temp = getDriver();
	temp.print();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << endl << endl << setw(30) << "\t| Vehicle Model | " << setw(18) << "License Plate | " << setw(10) << "Miles |"  << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << setw(30) << getModel() << setw(18) << getPlate() << setw(10) << getMileage() << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << setw(35) << "\t\t|\t Additional Data \t|" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << setw(20) << getWeight() << "kg\t Cargo: " << getCargo() << endl << endl;
}