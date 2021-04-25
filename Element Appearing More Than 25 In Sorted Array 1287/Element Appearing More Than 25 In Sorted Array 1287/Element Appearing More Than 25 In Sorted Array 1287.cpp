// Element Appearing More Than 25 In Sorted Array 1287.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int findSpecialInteger(vector<int>& arr) {
	int tf = arr.size() * 25 / 100;
	int count = 1, num = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		if (num == arr[i]) {
			count++;
		}
		else {
			num = arr[i];
			count = 1;
		}
		if (count > tf) {
			return num;
		}
	}

	return num;
}

int main()
{
	vector<int> arr = { 1, 2, 2, 6, 6, 6, 6, 7, 10 };
	std::cout << findSpecialInteger(arr) << endl;

	arr = { 1, 1 };
	std::cout << findSpecialInteger(arr) << endl;
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
