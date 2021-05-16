// Partition Array Into Three Parts With Equal Sum 1013.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool canThreePartsEqualSum(vector<int>& arr) {
	int sum = 0;
	for (int i : arr) {
		sum += i;
	}
	if (sum % 3 != 0) {
		return false;
	}
	int part = sum / 3;
	int x = 0, y = 0;
	for (int i = 0; i < arr.size(); i++) {
		x += arr[i];
		if (x == (y + 1) * part) {
			++y;
		}
	}

	return y >= 3;
}

int main()
{
	vector<int> arr = { 0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1 };
	std::cout << canThreePartsEqualSum(arr) << endl;

	arr = { 0, 2, 1, -6, 6, 7, 9, -1, 2, 0, 1 };
	std::cout << canThreePartsEqualSum(arr) << endl;

	arr = { 3, 3, 6, 5, -2, 2, 5, 1, -9, 4 };
	std::cout << canThreePartsEqualSum(arr) << endl;

	arr = { 1, 1, 1, 1 };
	std::cout << canThreePartsEqualSum(arr) << endl;

	arr = { 0, 0, 0, 0 };
	std::cout << canThreePartsEqualSum(arr) << endl;
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
