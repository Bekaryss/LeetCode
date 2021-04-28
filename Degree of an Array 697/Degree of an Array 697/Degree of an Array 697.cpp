// Degree of an Array 697.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findShortestSubArray(vector<int>& nums) {
	unordered_map<int, int> count, first;
	int degree = 0, res = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (first.find(nums[i]) == first.end()) {
			first[nums[i]] = i;
		}
		if (++count[nums[i]] > degree) {
			degree = count[nums[i]];
			res = i - first[nums[i]] + 1;
		}
		else if (count[nums[i]] == degree) {
			res = min(res, i - first[nums[i]] + 1);
		}
	}

	return res;
}

int main()
{
	vector<int> nums = { 1, 2, 2, 3, 1 };
	std::cout << findShortestSubArray(nums) << endl;
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
