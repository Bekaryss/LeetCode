// Maximum Average Subarray I 643.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
	double sum = 0, res = INT_MIN;
	for (int i = 0; i < nums.size(); i++) {
		if (i < k) {
			sum += nums[i];
		}
		else {
			res = max(res, sum);
			sum += nums[i] - nums[i - k];
		}
	}
	res = max(res, sum);

	return res / k;
}

int main()
{
	vector<int> nums = { 1, 12, -5, -6, 50, 3 };
	int k = 4;
	std::cout << findMaxAverage(nums, k) << endl;

	nums = { -6662, 5432, -8558, -8935, 8731, -3083, 4115, 9931, -4006, -3284, -3024, 1714, -2825, -2374, -2750, -959, 6516, 9356, 8040, -2169, -9490, -3068, 6299, 7823, -9767, 5751, -7897, 6680, -1293, -3486, -6785, 6337, -9158, -4183, 6240, -2846, -2588, -5458, -9576, -1501, -908, -5477, 7596, -8863, -4088, 7922, 8231, -4928, 7636, -3994, -243, -1327, 8425, -3468, -4218, -364, 4257, 5690, 1035, 6217, 8880, 4127, -6299, -1831, 2854, -4498, -6983, -677, 2216, -1938, 3348, 4099, 3591, 9076, 942, 4571, -4200, 7271, -6920, -1886, 662, 7844, 3658, -6562, -2106, -296, -3280, 8909, -8352, -9413, 3513, 1352, -8825 };
	k = 90;
	std::cout << findMaxAverage(nums, k) << endl;

	nums = { 5 };
	k = 1;
	std::cout << findMaxAverage(nums, k) << endl;

	nums = { -1 };
	k = 1;
	std::cout << findMaxAverage(nums, k) << endl;

	nums = { 9, 7, 3, 5, 6, 2, 0, 8, 1, 9 };
	k = 6;
	std::cout << findMaxAverage(nums, k) << endl;
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
