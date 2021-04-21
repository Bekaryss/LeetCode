// Toeplitz Matrix 766.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
	for (int i = 1; i < matrix.size(); i++) {
		for (int j = 1; j < matrix[0].size(); j++) {
			if (matrix[i][j] != matrix[i - 1][j - 1]) {
				return false;
			}
		}
	}

	return true;
}

int main()
{
	vector<vector<int>> matrix = { {1,2,3,4},{5,1,2,3},{9,5,1,2} };
	std::cout << isToeplitzMatrix(matrix) << endl;

	matrix = { {1,2},{2,2} };
	std::cout << isToeplitzMatrix(matrix) << endl;
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
