// Find Numbers with Even Number of Digits 1295.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int findNumbers(vector<int>& nums) {
	int evenNum= 0;
	for (int i : nums) {
		string s = to_string(i);
		if (s.size() % 2 == 0) {
			evenNum++;
		}
	}

	return evenNum;
}

int findNumbersSolution(vector<int>& nums) {
	int n, count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		n = nums[i];
		if ((10 <= n && n <= 99) || (1000 <= n && n <= 9999) || (n == 100000))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	vector<int> nums = { 12, 345, 2, 6, 7896 };
	std::cout << findNumbers(nums) << endl;

	nums = { 555,901,482,1771 };
	std::cout << findNumbers(nums) << endl;
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
