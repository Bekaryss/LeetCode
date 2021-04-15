// Create Target Array in the Given Order 1389.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void Print(vector<int> res) {
	for (int i : res) {
		cout << i << " ";
	}
	cout << endl;
}

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
	vector<int> res;
	for (int i = 0; i < index.size(); i++) {
		res.insert(res.begin() + index[i], nums[i]);
	}

	return res;
}

int main()
{
	vector<int> nums = { 0, 1, 2, 3, 4 }, index = { 0, 1, 2, 2, 1 };
	Print(createTargetArray(nums, index));

	nums = { 1,2,3,4,0 }, index = { 0,1,2,3,0 };
	Print(createTargetArray(nums, index));
	std::cout << "Hello World!\n";
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
