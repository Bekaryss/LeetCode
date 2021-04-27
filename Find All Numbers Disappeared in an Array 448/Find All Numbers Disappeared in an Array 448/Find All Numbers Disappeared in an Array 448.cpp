// Find All Numbers Disappeared in an Array 448.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Print(vector<int> res) {
	for (int i : res) {
		cout << i << " ";
	}
	cout << endl;
}

vector<int> findDisappearedNumbers(vector<int>& nums) {
	vector<int> appear(nums.size() + 1, 0), res;
	for (int i = 0; i < nums.size(); i++) {
		appear[nums[i]] = 1;
	}
	for (int i = 1; i < appear.size(); i++) {
		if (appear[i] == 0) {
			res.push_back(i);
		}
	}

	return res;
}


vector<int> findDisappearedNumbersWithSort(vector<int>& nums) {
	vector<int> res;
	sort(nums.begin(), nums.end());
	for (int i = 1; i < nums[0]; i++) {
		res.push_back(i);
	}
	for (int i = 1; i < nums.size(); i++) {
		for (int j = nums[i - 1] + 1; j < nums[i]; j++) {
			res.push_back(j);
		}
	}

	for (int i = nums[nums.size() - 1] + 1; i <= nums.size(); i++) {
		res.push_back(i);
	}

	return res;
}

int main()
{
	vector<int> nums = { 4, 3, 2, 7, 8, 2, 3, 1 };
	Print(findDisappearedNumbers(nums));

	nums = { 1, 1 };
	Print(findDisappearedNumbers(nums));
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
