// Third Maximum Number 414.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int thirdMax(vector<int>& nums) {
	vector<int> res;
	int lastMax = INT_MIN;
	for (int i = 0; i < nums.size(); i++) {
		lastMax = max(lastMax, nums[i]);
	}
	res.push_back(lastMax);
	for (int i = 0; i < 2; i++) {
		int localMax = INT_MIN;
		bool hasV = false;
		for (int j = 0; j < nums.size(); j++) {
			if (lastMax > nums[j]) {
				localMax = max(localMax, nums[j]);
				hasV = true;
			}
		}
		if (hasV == true) {
			lastMax = localMax;
			res.push_back(lastMax);
		}
	}

	return res.size() == 3 ? res[2] : res[0];
}

int main()
{
	vector<int> nums = { 3, 2, 1 };
	std::cout << thirdMax(nums) << endl;

	nums = { 1,2 };
	std::cout << thirdMax(nums) << endl;

	nums = { 1,2,-2147483648 };
	std::cout << thirdMax(nums) << endl;
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
