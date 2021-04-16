// Maximum Product of Two Elements in an Array 1464.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProductBruteForce(vector<int>& nums) {
	int maxV = INT_MIN;
	for (int i = 0; i < nums.size() - 1; i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			int val = (nums[i] - 1) * (nums[j] - 1);
			maxV = max(maxV, val);
		}
	}

	return maxV;
}

int maxProductSort(vector<int>& nums) {
	int maxV = INT_MIN;
	sort(nums.begin(), nums.end(), greater<int>());
	return (nums[0] - 1) * (nums[1] - 1);
}

int maxProduct(vector<int>& nums) {
	int fMax = INT_MIN;
	int sMax = INT_MIN;
	for (int i = 0; i < nums.size(); i++) {
		if (fMax < nums[i]) {
			sMax = fMax;
			fMax = nums[i];	
		}
		else {
			sMax = max(sMax, nums[i]);
		}
	}

	return (fMax - 1) * (sMax - 1);
}

int main()
{
	vector<int> nums = { 3, 4, 5, 2 };
	std::cout << maxProduct(nums) << endl;
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
