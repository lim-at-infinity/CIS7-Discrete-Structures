// Brian Lim
// Assignment 16
// Discrete Structures
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void displayMenu();
int getChoice();
void opSwitch(int choice);

int opOne();
int opTwo();
int opThree();
int opFour();
int opFive();
int opSix();
int opSeven();
int opEight();

int main()
{
	int choice = getChoice();

	while (choice != 9)
	{
		displayMenu();
		choice = getChoice();
		opSwitch(choice);
	}

	return 0;
}

void displayMenu()
{
	cout << "=====================" << endl;
	cout << "   PICK AN OPTION    " << endl;
	cout << "=====================" << endl;
	cout << "(1) Add a value to A" << endl;
	cout << "(2) Add a value to B" << endl;
	cout << "(3) A interset B" << endl;
	cout << "(4) A union B" << endl;
	cout << "(5) A diff B" << endl;
	cout << "(6) B diff A" << endl;
	cout << "(7) Powerset A" << endl;
	cout << "(8) Powerset B" << endl;
	cout << "(9) End Program" << endl;
	cout << "=====================" << endl;
	cout << "=====================" << endl;
}

int getChoice()
{
	int choice;

	cout << "Input: ";
	cin >> choice;

	return choice;
}

void opSwitch(int choice)
{
	switch (choice)
	{
	case 1: opOne();
		break;
	case 2: opTwo();
		break;
	case 3: opThree();
		break;
	case 4: opFour();
		break;
	case 5: opFive();
		break;
	case 6: opSix();
		break;
	case 7: opSeven();
		break;
	case 8: opEight();
		break;
	case 9: cout << "Ending Program...";
		break;
	default: cout << "Invalid Input";
	}
}
int opOne() {}
int opTwo() {}
int opThree() {}
int opFour() {}
int opFive() {}
int opSix() {}
int opSeven() {}
int opEight() {}
