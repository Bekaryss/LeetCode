// Find Winner on a Tic Tac Toe Game 1275.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string tictactoe(vector<vector<int>>& moves) {
	vector<int> row(3), column(3);
	int d1 = 0, d2 = 0;
	for (int i = 0; i < moves.size(); i++) {
		int x = moves[i][0], y = moves[i][1];
		row[x] += i % 2 == 0 ? 1 : 4;
		column[y] += i % 2 == 0 ? 1 : 4;
		if (x == y) {
			d1 += i % 2 == 0 ? 1 : 4;
		}
		if (x + y == 2) {
			d2 += i % 2 == 0 ? 1 : 4;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (row[i] == 3 || column[i] == 3 || d1 == 3 || d2 == 3) {
			return "A";
		}
		if (row[i] == 12 || column[i] == 12 || d1 == 12 || d2 == 12) {
			return "B";
		}
	}
	if (moves.size() == 9) {
		return "Draw";
	}

	return "Pending";
}

string tictactoeSolution(vector<vector<int>>& moves) {
	vector<vector<int>> matrix(3, vector<int>(3));
	for (int i = 0; i < moves.size(); i++) {
		int x = moves[i][0], y = moves[i][1];
		matrix[x][y] = i % 2 == 0 ? 1 : 4;
	}
	vector<int> row(3), column(3);
	int d1 = 0, d2 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			row[i] += matrix[i][j];
			column[j] += matrix[i][j];
			if (i == j) {
				d1 += matrix[i][j];
			}
			if (i + j == 2) {
				d2 += matrix[i][j];
			}
			if (row[i] == 3 || column[j] == 3 || d1 == 3 || d2 == 3) {
				return "A";
			}
			if (row[i] == 12 || column[j] == 12 || d1 == 12 || d2 == 12) {
				return "B";
			}
		}
	}

	if (moves.size() == 9) {
		return "Draw";
	}

	return "Pending";
}

int main()
{
	vector<vector<int>> moves = { {0,0},{2,0},{1,1},{2,1},{2,2} };
	std::cout << tictactoe(moves) << endl;

	moves = { {0,0},{1,1},{0,1},{0,2},{1,0},{2,0} };
	std::cout << tictactoe(moves) << endl;

	moves = { {0,0},{1,1},{2,0},{1,0},{1,2},{2,1},{0,1},{0,2},{2,2} };
	std::cout << tictactoe(moves) << endl;

	moves = { {0,0},{1,1} };
	std::cout << tictactoe(moves) << endl;
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
