// Count Good Triplets 1534.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
	int count = 0;
	for (int i = 0; i < arr.size() - 2; i++) {
		for (int j = i + 1; j < arr.size() - 1; j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				if (abs(arr[i] - arr[j]) <= a 
					&& abs(arr[j] - arr[k]) <= b 
					&& abs(arr[i] - arr[k]) <= c) {
					count++;
				}
			}
		}
	}

	return count;
}

int main()
{
	vector<int> arr = { 3, 0, 1, 1, 9, 7 };
	int a = 7, b = 2, c = 3;
	std::cout << countGoodTriplets(arr, a, b, c) << endl;

	arr = { 1,1,2,2,3 };
	a = 0, b = 0, c = 1;
	std::cout << countGoodTriplets(arr, a, b, c) << endl;

	arr = { 7, 3, 7, 3, 12, 1, 12, 2, 3 };
	a = 5, b = 8, c = 1;
	std::cout << countGoodTriplets(arr, a, b, c) << endl;
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
