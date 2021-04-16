// Number of Students Doing Homework at a Given Time 1450.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
	int count = 0;
	for (int i = 0; i < startTime.size(); i++) {
		if (startTime[i] <= queryTime && queryTime <= endTime[i]) {
			count++;
		}
	}

	return count;
}

int main()
{
	vector<int> startTime = { 1, 2, 3 }, endTime = { 3, 2, 7 };
	int queryTime = 4;
	std::cout << busyStudent(startTime, endTime, queryTime) << endl;
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
