// Check if Array Is Sorted and Rotated 1752.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int>& nums) {
	int n = nums.size(), count = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i] > nums[(i + 1) % n] && ++count > 1) {
			return false;
		}
	}

	return true;
}

int main()
{
	vector<int> nums = { 3, 4, 5, 1, 2 };
	std::cout << check(nums) << endl;

	nums = { 2, 1, 3, 4 };
	std::cout << check(nums) << endl;

	nums = { 1, 2, 3 };
	std::cout << check(nums) << endl;

	nums = { 1, 1, 1 };
	std::cout << check(nums) << endl;

	nums = { 2, 1 };
	std::cout << check(nums) << endl;
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
