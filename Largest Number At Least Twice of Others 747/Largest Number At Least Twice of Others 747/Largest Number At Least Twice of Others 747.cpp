// Largest Number At Least Twice of Others 747.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int dominantIndex(vector<int>& nums) {
	int maxV = 0, res = -1;
	for (int i = 0; i < nums.size(); i++) {
		if (maxV < nums[i]) {
			res = i;
		}
		maxV = max(maxV, nums[i]);
	}
	bool twice = true;
	for (int i = 0; i < nums.size(); i++) {
		if (res != i && maxV / 2 < nums[i]) {
			twice = false;
		}
	}

	return twice == true ? res : -1;
}

int main()
{
	vector<int> nums = { 3, 6, 1, 0 };
	std::cout << dominantIndex(nums) << endl;
	nums = { 1, 2, 3, 4 };
	std::cout << dominantIndex(nums) << endl;

	nums = { 1 };
	std::cout << dominantIndex(nums) << endl;
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
