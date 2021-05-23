// Subrectangle Queries 1476.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class SubrectangleQueries {
private:
	vector<vector<int>> rect;
public:
	SubrectangleQueries(vector<vector<int>>& rectangle) {
		rect = rectangle;
	}

	void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
		for (int i = row1; i <= row2; i++) {
			for (int j = col1; j <= col2; j++) {
				rect[i][j] = newValue;
			}
		}
	}

	int getValue(int row, int col) {
		return rect[row][col];
	}
};

int main()
{
	vector<vector<int>> rect = { {1, 2, 1}, { 4,3,4 }, { 3,2,1 }, { 1,1,1 } };
	SubrectangleQueries sq(rect);
	std::cout << sq.getValue(0, 2) << endl;
	sq.updateSubrectangle(0, 0, 3, 2, 5);
	std::cout << sq.getValue(0, 2) << endl;
	std::cout << sq.getValue(3, 1) << endl;
	sq.updateSubrectangle(3, 0, 3, 2, 10);
	std::cout << sq.getValue(3, 1) << endl;
	std::cout << sq.getValue(0, 2) << endl;
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
