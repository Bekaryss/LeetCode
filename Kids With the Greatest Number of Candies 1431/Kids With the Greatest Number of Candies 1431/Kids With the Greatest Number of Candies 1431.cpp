// Kids With the Greatest Number of Candies 1431.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Print(vector<bool> nums) {
	for (int i : nums) {
		cout << i << " ";
	}
	cout << endl;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
	int greatest = INT_MIN;
	for (int i : candies) {
		greatest = max(i, greatest);
	}
	vector<bool> result(candies.size(), false);
	for (int i = 0; i < candies.size(); i++) {
		if (candies[i] + extraCandies >= greatest) {
			result[i] = true;
		}
	}

	return result;
}

int main()
{
	vector<int> candies = { 2,3,5,1,3 };
	int extraCandies = 3;
	Print(kidsWithCandies(candies, extraCandies));
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
