// Reshape the Matrix 566.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void Print(vector<vector<int>> res) {
	for (auto i : res) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
}

vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
	int n = nums.size(), m = nums[0].size();
	if (m * n != r * c) {
		return nums;
	}
	vector<vector<int>> res(r, vector<int>(c));
	int f = 0, g = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			res[f][g] = nums[i][j];
			g++;
			if (g == c) {
				f++;
				g = 0;
			}
		}
	}

	return res;
}

int main()
{
	vector<vector<int>> mat = { {1,2},{3,4} };
	int r = 1, c = 4;
	Print(matrixReshape(mat, r, c));
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
