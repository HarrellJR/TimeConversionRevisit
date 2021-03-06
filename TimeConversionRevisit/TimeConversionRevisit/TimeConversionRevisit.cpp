/*
Jeremy Harrell
ITSE 1301
Time conversion revisit
Creating a program to convert time
To convert time by setting up a function that can convert Time
*/


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Calculate hours
int getTotalMinutes(int intHours, int intMinutes) {
	return (intHours * 60) + intMinutes;
}

int getHours(int intTotalMinutes) {
	return intTotalMinutes / 60;
}

int getMinutes(int intTotalMinutes) {
	return intTotalMinutes % 60;
}

//function to help print out numbers
int getIntInput(string strMessage, int intMin, int intMax) {
	int intNumber = 0;
	//TODO: Display message
	//TODO: Logic here to loop until it is within the min and max.
	return intNumber;
}

//Getting hours formatted
void printTime(int intTotalMinutes, int intFormat12Or24) {
	if (intFormat12Or24 == 12) {
		int intHours = getHours(intTotalMinutes);
		if (intHours == 0) {
			intHours = 12;
		}
		else if (intHours >= 13) {
			intHours -= 12;
		}

		cout << setw(2) << intHours
			<< ":"
			<< setw(2) << setfill('0') << getMinutes(intTotalMinutes)
			<< (getHours(intTotalMinutes) >= 12 ? " PM" : " AM")
			<< endl;
	}
	else {
		cout << setw(2) << setfill('0') << getHours(intTotalMinutes)
			<< ":"
			<< setw(2) << setfill('0') << getMinutes(intTotalMinutes) << endl;
	}
}

int main()
{
	//All time calculations made
	int intTotalMinutes = 0;
	printTime(10, 100);
	printTime(1000, 4500);
	printTime(44, 500);
	printTime(30, 900);
	printTime(550, 666);
	printTime(69, 420);
	printTime(444, 690);
	printTime(4200, 6666);
    return 0;
}

