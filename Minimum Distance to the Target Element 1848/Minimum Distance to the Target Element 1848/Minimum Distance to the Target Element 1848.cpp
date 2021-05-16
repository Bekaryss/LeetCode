// Minimum Distance to the Target Element 1848.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int getMinDistance(vector<int>& nums, int target, int start) {
	int res = INT_MAX;
	for (int i = 0; i < nums.size() && res > abs(start - i); i++) {
		int c = abs(i - start);
		if (nums[i] == target && c < res) {
			res = c;
		}
	}

	return res;
}

int main()
{
	vector<int> nums = { 1, 2, 3, 4, 5 };
	int target = 5, start = 3;
	std::cout << getMinDistance(nums, target, start) << endl;

	nums = { 1 };
	target = 1, start = 0;
	std::cout << getMinDistance(nums, target, start) << endl;

	nums = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	target = 1, start = 0;
	std::cout << getMinDistance(nums, target, start) << endl;
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
