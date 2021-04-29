// Duplicate Zeros 1089.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void duplicateZerosSolution(vector<int>& arr) {
	int n = arr.size(), j = n + count(arr.begin(), arr.end(), 0);
	for (int i = n - 1; i >= 0; --i) {
		if (--j < n)
			arr[j] = arr[i];
		if (arr[i] == 0 && --j < n)
			arr[j] = 0;
	}
}

void duplicateZeros(vector<int>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == 0) {
			arr.insert(arr.begin() + i, 0);
			i++;
			arr.pop_back();
		}
	}
}

int main()
{
	vector<int> arr = { 1,0,2,3,0,4,5,0 };
	duplicateZerosSolution(arr);
	for (int i : arr) {
		cout << i << " ";
	}
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
