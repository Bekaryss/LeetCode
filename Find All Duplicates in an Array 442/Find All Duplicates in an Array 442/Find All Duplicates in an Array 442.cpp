// Find All Duplicates in an Array 442.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
	vector<int> res;
	for (int i = 0; i < nums.size(); i++) {
		int index = abs(nums[i]) - 1;
		if (nums[index] < 0)
			res.push_back(index + 1);
		nums[index] = -nums[index];
	}

	return res;
}

void Print(vector<int> res) {
	for (int i : res) {
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> nums = { 4, 3, 2, 7, 8, 2, 3, 1 };
	Print(findDuplicates(nums));

	nums = { 1, 5, 3, 2, 2 };
	Print(findDuplicates(nums));
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
