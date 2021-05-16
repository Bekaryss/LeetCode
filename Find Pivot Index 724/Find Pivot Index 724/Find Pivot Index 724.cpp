// Find Pivot Index 724.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int pivotIndexSolution(vector<int>& nums) {
	int sum1 = 0, sum2 = 0;
	for (int i : nums) {
		sum1 += i;
	}
	for (int i = 0; i < nums.size(); i++) {
		if (sum2 == sum1 - sum2 - nums[i]) {
			return i;
		}
		sum2 += nums[i];
	}

	return -1;
}


int pivotIndex(vector<int>& nums) {
	vector<int> left, right;
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < nums.size(); i++) {
		left.push_back(sum1 += nums[i]);
		right.insert(right.begin(), sum2 += nums[nums.size() - i - 1]);
	}
	for (int i = 0; i < nums.size(); i++) {
		if (left[i] == right[i]) {
			return i;
		}
	}

	return -1;
}

int main()
{
	vector<int> nums = { 1, 7, 3, 6, 5, 6 };
	std::cout << pivotIndexSolution(nums) << endl;
	nums = { 1,2,3 };
	std::cout << pivotIndexSolution(nums) << endl;
	nums = { 2,1,-1 };
	std::cout << pivotIndexSolution(nums) << endl;
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
