#define _CRT_SECURE_NO_WARNINGS
#define _WIN32_WINNT 0x500
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include "time.h"
#include "Vehicle.h"
#include "User.h"
#include "Business.h"
#include "Cargo.h"
#include "Loan.h"
#include "Order.h"
#include "Menu.h"
using namespace std;

int main()
{
	Menu VMS;
	int i = 1;
	//this code sets the size of the screen for the user
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 800, 600, TRUE);
	VMS.welcome();
	while (i == 1)		//run until user decides the exit the program
	{
		i = VMS.options();
	}
	return 0;
}
