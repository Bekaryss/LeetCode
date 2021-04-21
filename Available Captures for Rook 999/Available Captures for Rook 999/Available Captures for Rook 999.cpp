// Available Captures for Rook 999.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;


pair<int, int> checker(vector<vector<char>>& board) {
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
			if (board[i][j] == 'R') {
				return make_pair(i, j);
			}
		}
	}
	return make_pair(0, 0);
}

int numRookCaptures(vector<vector<char>>& board) {
	pair<int, int>point = checker(board);
	vector<vector<int>> direction = { {1,0},{0,1},{-1,0},{0,-1} };
	int res = 0;
	for (int i = 0; i < direction.size(); i++) {
		int x = point.first;
		int y = point.second;
		while (0 <= x && x < board.size() && 0 <= y && y < board[0].size()) {
			if (board[x][y] == 'B') {
				break;
			}
			else if (board[x][y] == 'p') {
				res++;
				break;
			}
			x += direction[i][0];
			y += direction[i][1];
		}
	}

	return res;
}

int main()
{
	vector<vector<char>> board = {
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','R','.','.','.','p'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'} };
	std::cout << numRookCaptures(board) << endl;

	board = {
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'p','p','.','R','.','p','B','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','B','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'} };
	std::cout << numRookCaptures(board) << endl;
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
