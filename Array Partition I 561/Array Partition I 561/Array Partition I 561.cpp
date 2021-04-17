// Array Partition I 561.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arrayPairSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int sum = 0;
	for (int i = 0; i < nums.size(); i += 2) {
		sum += min(nums[i], nums[i + 1]);
	}

	return sum;
}

int main()
{
	vector<int> nums = { 1,4,3,2 };
	std::cout << arrayPairSum(nums) << endl;

	nums = { 6,2,6,5,1,2 };
	std::cout << arrayPairSum(nums) << endl;
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
