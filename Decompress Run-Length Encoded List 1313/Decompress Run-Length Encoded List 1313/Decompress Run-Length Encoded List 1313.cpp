// Decompress Run-Length Encoded List 1313.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void Print(vector<int> res) {
	for (int i : res) {
		cout << i << endl;
	}
	cout << endl;
}

vector<int> decompressRLElist(vector<int>& nums) {
	vector<int> res;
	for (int i = 0; i < nums.size(); i += 2) {
		for (int j = 0; j < nums[i]; j++) {
			res.push_back(nums[i + 1]);
		}
	}

	return res;
}

int main()
{
	vector<int> nums = { 1,2,3,4 };
	Print(decompressRLElist(nums));
	nums = { 1,1,2,3 };
	Print(decompressRLElist(nums));
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
