// Special Array With X Elements Greater Than or Equal X 1608.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int specialArray(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int k = 0;
	for (int i = 0; i < nums.size(); i++) {
		while (k <= nums[i]) {
			if (k == nums.size() - i) {
				return k;
			}
			k++;
		}
	}

	return -1;
}

int main()
{
	vector<int> nums = { 3, 5 };
	std::cout << specialArray(nums) << endl;

	nums = { 0,0 };
	std::cout << specialArray(nums) << endl;

	nums = { 0,4,3,0,4 };
	std::cout << specialArray(nums) << endl;

	nums = { 3,6,7,7,0 };
	std::cout << specialArray(nums) << endl;
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
