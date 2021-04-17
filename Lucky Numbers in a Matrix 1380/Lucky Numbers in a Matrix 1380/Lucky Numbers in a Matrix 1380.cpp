// Lucky Numbers in a Matrix 1380.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> luckyNumbers(vector<vector<int>>& matrix) {
	vector<int> row(matrix.size(), INT_MAX);
	vector<int> col(matrix[0].size(), INT_MIN);
	vector<int> res;
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			row[i] = min(row[i], matrix[i][j]);
			col[j] = max(col[j], matrix[i][j]);
		}
	}
	for (int i = 0; i < row.size(); i++) {
		for (int j = 0; j < col.size(); j++) {
			if (row[i] == col[j]) {
				res.push_back(row[i]);
			}
		}
	}

	return res;
}

int main()
{

	vector<vector<int>> matrix = { 
		{3,7,8},
		{9,11,13},
		{15,16,17} };
	Print(luckyNumbers(matrix));

	matrix = matrix = { {1,10,4,2},{9,3,8,7},{15,16,17,12} };
	Print(luckyNumbers(matrix));
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
