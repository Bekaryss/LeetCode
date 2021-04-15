// Matrix Diagonal Sum 1572.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
	int sum = 0, n = mat.size() - 1;
	for (int i = 0; i < mat.size(); i++) {
		if (i == n - i) {
			sum += mat[i][i];
		}
		else {
			sum += mat[i][i] + mat[i][n - i];
		}
	}

	return sum;
}

int main()
{
	vector<vector<int>> mat = { {1,2,3},
								{4,5,6},
								{7,8,9} };
	std::cout << diagonalSum(mat) << endl;


	mat = { {1,1,1,1},
			{1,1,1,1},
			{1,1,1,1},
			{1,1,1,1} };
	std::cout << diagonalSum(mat) << endl;

	mat = { {5} };
	std::cout << diagonalSum(mat) << endl;
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
