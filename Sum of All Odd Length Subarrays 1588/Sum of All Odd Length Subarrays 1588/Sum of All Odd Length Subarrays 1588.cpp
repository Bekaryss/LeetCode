// Sum of All Odd Length Subarrays 1588.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
	int size = arr.size();
	int sum = 0, index = 1;
	while (index <= size) {
		int local = 0;
		int i = 0, e = index, s = 0;
		while (i < e) {
			local += arr[i];
			i++;
		}
		int slide = local;
		while (e < size) {
			slide += arr[e];
			slide -= arr[s];
			e++;
			s++;
			local += slide;
		}
		sum += local;
		index += 2;
	}

	return sum;
}

int main()
{
	vector<int> arr = { 1, 4, 2, 5, 3 };
	std::cout << sumOddLengthSubarrays(arr) << endl;

	arr = { 1,2 };
	std::cout << sumOddLengthSubarrays(arr) << endl;

	arr = { 10,11,12 };
	std::cout << sumOddLengthSubarrays(arr) << endl;
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
