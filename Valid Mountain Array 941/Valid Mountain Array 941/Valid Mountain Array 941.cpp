// Valid Mountain Array 941.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool validMountainArray(vector<int>& arr) {
	if (arr.size() < 3) {
		return false;
	}
	int directChange = 1;
	int inc = 0, dec = 0;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] == arr[i - 1]) {
			return false;
		}
		if (arr[i] < arr[i - 1] && inc == 0) {
			return false;
		}
		if (arr[i] > arr[i - 1]) {
			inc++;
			if (dec > 0)
				return false;
		}
		else {
			dec++;
		}
	}
	if (inc > 0 && dec > 0) {
		return true;
	}
	return false;
}

bool validMountainArraySolution(vector<int>& arr) {
	if (arr.size() < 3) {
		return false;
	}
	int n = arr.size() - 1;
	int i = 0, j = n;
	while (i < n - 1 && arr[i] < arr[i + 1]) {
		i++;
	}
	while (j > 0 && arr[j] < arr[j - 1]) {
		j--;
	}

	return i > 0 && j < arr.size() - 1 && i == j;
}

int main()
{
	vector<int> arr = { 2, 1 };
	std::cout << validMountainArraySolution(arr) << endl;

	arr = { 3, 5, 5 };
	std::cout << validMountainArraySolution(arr) << endl;

	arr = { 0, 3, 2, 1 };
	std::cout << validMountainArraySolution(arr) << endl;

	arr = { 0,1,2,3,4,5,6,7,8,9 };
	std::cout << validMountainArraySolution(arr) << endl;
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
