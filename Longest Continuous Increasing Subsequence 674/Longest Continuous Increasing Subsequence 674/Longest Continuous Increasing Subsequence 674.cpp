// Longest Continuous Increasing Subsequence 674.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
	int i = 1, l = 0, res = -1;
	while (i <= nums.size()) {
		if (i != nums.size() && nums[i] > nums[i - 1]) {
			i++;
		}
		else {
			res = max(res, i - l);
			l = i++;
		}
	}

	return res;
}

int findLengthOfLCISSolution(vector<int>& nums) {
	int l = 0, res = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (i > 0 && nums[i - 1] >= nums[i]) {
			l = i;
		}
		res = max(res, i - l + 1);
	}

	return res;
}

int main()
{
	vector<int> nums = { 1, 3, 5, 4, 7 };
	std::cout << findLengthOfLCISSolution(nums) << endl;

	nums = { 2, 2, 2, 2, 2 };
	std::cout << findLengthOfLCISSolution(nums) << endl;

	nums = { 1,3,5,7 };
	std::cout << findLengthOfLCISSolution(nums) << endl;

	nums = { 1,3,5,4,2,3,4,5 };
	std::cout << findLengthOfLCIS(nums) << endl;
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
