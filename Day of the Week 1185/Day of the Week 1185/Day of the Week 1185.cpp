// Day of the Week 1185.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool IsLeap(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

string dayOfTheWeek(int day, int month, int year) {
	vector<int> months = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	vector<string> week = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", };
	int days = 0;
	for (int i = 1971; i < year; i++) {
		if (IsLeap(i)) {
			days += 366;
		}
		else {
			days += 365;
		}
	}
	for (int i = 0; i < month - 1; i++) {
		days += months[i];
		if (i == 1 && IsLeap(year)) {
			days += 1;
		}
	}
	days += day;

	return week[days % 7];
}

int main()
{
	int day = 31, month = 8, year = 2019;
	std::cout << dayOfTheWeek(day, month, year) << endl;

	day = 18, month = 7, year = 1999;
	std::cout << dayOfTheWeek(day, month, year) << endl;

	day = 15, month = 8, year = 1993;
	std::cout << dayOfTheWeek(day, month, year) << endl;

	day = 31, month = 8, year = 2100;
	std::cout << dayOfTheWeek(day, month, year) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
