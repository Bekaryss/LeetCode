// Check If All 1's Are at Least Length K Places Away 1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool kLengthApart(vector<int>& nums, int k) {
	int index = -1;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == 1) {
			if (index != -1 && i - index - 1 < k)
				return false;
			index = i;
		}
	}

	return true;
}

int main()
{
	vector<int> nums = { 1, 0, 0, 0, 1, 0, 0, 1 };
	int k = 2;
	std::cout << kLengthApart(nums, k) << endl;

	nums = { 1,0,0,1,0,1 };
	k = 2;
	std::cout << kLengthApart(nums, k) << endl;

	nums = { 1,1,1,1,1 };
	k = 0;
	std::cout << kLengthApart(nums, k) << endl;

	nums = { 0,1,0,1 };
	k = 1;
	std::cout << kLengthApart(nums, k) << endl;
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
