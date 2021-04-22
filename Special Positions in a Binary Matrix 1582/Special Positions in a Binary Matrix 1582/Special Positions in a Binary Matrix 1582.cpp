// Special Positions in a Binary Matrix 1582.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int numSpecial(vector<vector<int>>& mat) {
	vector<int> row(mat.size()), col(mat[0].size());
	int res = 0;
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat[0].size(); j++) {
			if (mat[i][j] == 1) {
				row[i]++;
				col[j]++;
			}
		}
	}
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat[0].size(); j++) {
			if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1) {
				res++;
			}
		}
	}

	return res;
}

int main()
{
	vector<vector<int>> mat = { {1,0,0},
								{0,0,1},
								{1,0,0} };
	std::cout << numSpecial(mat) << endl;

	mat = { {1,0,0},
			  {0,1,0},
			  {0,0,1} };
	std::cout << numSpecial(mat) << endl;

	mat = { {0,0,0,1},
		  {1,0,0,0},
		  {0,1,1,0},
		  {0,0,0,0} };
	std::cout << numSpecial(mat) << endl;

	mat = { {0,0,0,0,0},
		  {1,0,0,0,0},
		  {0,1,0,0,0},
		  {0,0,1,0,0},
		  {0,0,0,1,1} };
	std::cout << numSpecial(mat) << endl;
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
