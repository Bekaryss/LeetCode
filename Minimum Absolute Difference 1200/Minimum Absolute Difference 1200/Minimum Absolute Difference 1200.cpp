// Minimum Absolute Difference 1200.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Print(vector<vector<int>> res) {
	for (auto i : res) {
		cout << i[0] << " " << i[1] << endl;
	}
	cout << endl;
}

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
	vector<vector<int>> res;
	sort(arr.begin(), arr.end());
	int minV = INT_MAX;
	for (int i = 1; i < arr.size(); i++) {
		int val = arr[i] - arr[i - 1];
		minV = min(val, minV);
	}
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] - arr[i - 1] == minV) {
			res.push_back({ arr[i - 1], arr[i] });
		}
	}

	return res;
}

int main()
{
	vector<int> arr = { 4, 2, 1, 3 };
	Print(minimumAbsDifference(arr));

	arr = { 1, 3, 6, 10, 15 };
	Print(minimumAbsDifference(arr));

	arr = { 3, 8, -10, 23, 19, -4, -14, 27 };
	Print(minimumAbsDifference(arr));
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
