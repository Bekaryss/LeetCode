// Positions of Large Groups 830.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<vector<int>> largeGroupPositions(string s) {
	vector<vector<int>> res;
	int first = 0;
	char c = s[0];
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != c) {
			if (i - first >= 3)
				res.push_back({ first, i - 1 });
			first = i;
			c = s[i];
		}
	}
	int last = s.size();
	if (last - first >= 3) {
		
		res.push_back({ first, last - 1 });
	}

	sort(res.begin(), res.end());

	return res;
}

void Print(vector<vector<int>> res) {
	for (auto i : res) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
}

int main()
{
	string s = "abbxxxxzzy";
	Print(largeGroupPositions(s));
	s = "abcdddeeeeaabbbcd";
	Print(largeGroupPositions(s));
	s = "aaa";
	Print(largeGroupPositions(s));
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
