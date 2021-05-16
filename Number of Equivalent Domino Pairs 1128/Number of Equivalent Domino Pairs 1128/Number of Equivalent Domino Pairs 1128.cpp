// Number of Equivalent Domino Pairs 1128.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int numEquivDominoPairs(vector<vector<int>>& dominoes) {
	unordered_map<string, int> map;
	int res = 0;
	for (int i = 0; i < dominoes.size(); i++) {
		string key = to_string(min(dominoes[i][0], dominoes[i][1])) + "_" + to_string(max(dominoes[i][0], dominoes[i][1]));
		res += map[key]++;
	}

	return res;
}

int main()
{
	vector<vector<int>> dominoes = { {1,2},{2,1},{3,4},{5,6} };
	std::cout << numEquivDominoPairs(dominoes) << endl;

	dominoes = { {1,2},{2,1},{3,4},{5,6} };
	std::cout << numEquivDominoPairs(dominoes) << endl;
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
