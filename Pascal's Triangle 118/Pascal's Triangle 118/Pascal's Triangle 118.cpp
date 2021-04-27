// Pascal's Triangle 118.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> res;
	for (int i = 1; i <= numRows; i++) {
		vector<int> row(i);
		for (int j = 0; j < i; j++) {
			if (j == 0 || j == row.size() - 1) {
				row[j] = 1;
			}
			else if (i > 2) {
				int val = res[i - 2][j - 1] + res[i - 2][j];
				row[j] = val;
			}
		}
		res.push_back(row);
	}

	return res;
}

int main()
{
	Print(generate(5));
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
