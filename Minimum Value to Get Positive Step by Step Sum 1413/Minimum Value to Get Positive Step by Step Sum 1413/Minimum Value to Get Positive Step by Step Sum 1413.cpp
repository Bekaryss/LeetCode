// Minimum Value to Get Positive Step by Step Sum 1413.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int minStartValue(vector<int>& nums) {
	int res = INT_MAX, sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		sum += nums[i];
		res = min(res, sum);
	}

	return max(1, 1 - res);
}

int main()
{
	vector<int> nums = { -3, 2, -3, 4, 2 };
	std::cout << minStartValue(nums) << endl;

	nums = { 1,2 };
	std::cout << minStartValue(nums) << endl;

	nums = { 1,-2, -3 };
	std::cout << minStartValue(nums) << endl;
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
