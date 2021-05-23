// Number of Sub-arrays of Size K and Average Greater 1343.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
	int j = 0, sum = 0, res = 0;
	for (int i = 0; i < arr.size(); i++) {
		int size = i - j + 1;
		sum += arr[i];
		if (size > k) {
			sum -= arr[j++];
		}
		if (size >= k && sum / k >= threshold) {
			res++;
		}
	}

	return res;
}

int main()
{
	vector<int> arr = { 2, 2, 2, 2, 5, 5, 5, 8 };
	int k = 3, threshold = 4;
	std::cout << numOfSubarrays(arr, k, threshold) << endl;

	arr = { 11,13,17,23,29,31,7,5,2,3 };
	k = 3, threshold = 5;
	std::cout << numOfSubarrays(arr, k, threshold) << endl;
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
