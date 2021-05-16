// Summary Ranges 228.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void range(vector<string>& res, vector<int>& nums, int l, int i) {
	if (l != i - 1) {
		res.push_back(to_string(nums[l]) + "->" + to_string(nums[i - 1]));
	}
	else {
		res.push_back(to_string(nums[l]));
	}
}

vector<string> summaryRanges(vector<int>& nums) {
	vector<string> res;
	if (nums.size() == 0) {
		return res;
	}
	int l = 0;
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i - 1] + 1 != nums[i]) {
			range(res, nums, l, i);
			l = i;
		}
	}
	range(res, nums, l, nums.size());

	return res;
}

void Print(vector<string> res) {
	for (string i : res) {
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> nums = { 0, 1, 2, 4, 5, 7 };
	Print(summaryRanges(nums));

	nums = { 0,2,3,4,6,8,9 };
	Print(summaryRanges(nums));

	nums = { };
	Print(summaryRanges(nums));

	nums = { -1 };
	Print(summaryRanges(nums));

	nums = { 0 };
	Print(summaryRanges(nums));
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
