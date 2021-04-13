// Running Sum of 1d Array 1480.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void Print(vector<int> nums) {
	for (int i : nums) {
		cout << i << " ";
	}
	cout << endl;
}

vector<int> runningSum(vector<int>& nums) {
	for (int i = 1; i < nums.size(); i++) {
		nums[i] += nums[i - 1];
	}
	return nums;
}

int main()
{
	vector<int> input = { 1,2,3,4 };
	Print(runningSum(input));
	input = { 1,1,1,1,1 };
	Print(runningSum(input));
	input = { 3,1,2,10,1 };
	Print(runningSum(input));
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
