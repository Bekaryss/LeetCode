// Richest Customer Wealth 1672.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
	int richest = INT_MIN;
	for (int i = 0; i < accounts.size(); i++) {
		int wealth = 0;
		for (int j = 0; j < accounts[i].size(); j++) {
			wealth += accounts[i][j];
		}
		richest = max(wealth, richest);
	}

	return richest;
}

int main()
{
	vector<vector<int>> accounts = { { 1, 2, 3},{3, 2, 1} };
	std::cout << maximumWealth(accounts) << endl;
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
