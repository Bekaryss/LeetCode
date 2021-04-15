// Find the Highest Altitude 1732.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestAltitude(vector<int>& gain) {
	int altitude = 0, sum = 0;
	for (int i : gain) {
		sum += i;
		altitude = max(altitude, sum);
	}

	return altitude;
}

int main()
{
	vector<int> gain = { -5, 1, 5, 0, -7 };
	std::cout << largestAltitude(gain) << endl;
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
