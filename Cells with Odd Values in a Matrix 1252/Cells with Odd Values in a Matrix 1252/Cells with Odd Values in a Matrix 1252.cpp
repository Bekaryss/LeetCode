// Cells with Odd Values in a Matrix 1252.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
	vector<int> row(m, 0);
	vector<int> column(n, 0);

	int res = 0;

	for (auto i : indices) {
		row[i[0]]++;
		column[i[1]]++;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int val = 0;
			val += row[i];
			val += column[j];
			if (val % 2 != 0) {
				res++;
			}
		}
	}

	return res;
}

int main()
{
	int m = 2, n = 3;
	vector<vector<int>> indices = { {0, 1},{1, 1} };
	std::cout << oddCells(m, n, indices) << endl;

	m = 2, n = 2;
	indices = { {1, 1},{0, 0} };
	std::cout << oddCells(m, n, indices) << endl;
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
