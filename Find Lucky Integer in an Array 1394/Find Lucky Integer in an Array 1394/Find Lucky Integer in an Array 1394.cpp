// Find Lucky Integer in an Array 1394.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int findLucky(vector<int>& arr) {
	vector<int> lucky(500);
	for (int i = 0; i < arr.size(); i++) {
		lucky[arr[i]]++;
	}
	for (int i = lucky.size() - 1; i > 0; i--) {
		if (i == lucky[i]) {
			return i;
		}
	}

	return -1;
}

int main()
{
	vector<int> arr = { 2,2,3,4 };
	std::cout << findLucky(arr) << endl;

	arr = { 1,2,2,3,3,3 };
	std::cout << findLucky(arr) << endl;

	arr = { 2,2,2,3,3 };
	std::cout << findLucky(arr) << endl;

	arr = { 5 };
	std::cout << findLucky(arr) << endl;

	arr = { 7,7,7,7,7,7,7 };
	std::cout << findLucky(arr) << endl;
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
