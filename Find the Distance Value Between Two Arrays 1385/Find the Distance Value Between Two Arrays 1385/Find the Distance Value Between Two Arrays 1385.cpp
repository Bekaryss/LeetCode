// Find the Distance Value Between Two Arrays 1385.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
	int res = 0;
	for (int i = 0; i < arr1.size(); i++) {
		bool dist = true;
		for (int j = 0; j < arr2.size(); j++) {
			if (abs(arr1[i] - arr2[j]) <= d) {
				dist = false;
			}
		}
		if (dist) {
			res++;
		}
	}

	return res;
}

int main()
{
	vector<int> arr1 = { 4, 5, 8 }, arr2 = { 10, 9, 1, 8 };
	int d = 2;
	std::cout << findTheDistanceValue(arr1, arr2, d) << endl;
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
