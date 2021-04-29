// Image Smoother 661.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
	vector<vector<int>> res(M.size(), vector<int>(M[0].size()));
	vector<vector<int>> sur = { {-1,-1}, {0,-1}, {-1,0}, {1,0}, {0,1}, {1,1}, {1,-1}, {-1, 1} };
	for (int i = 0; i < M.size(); i++) {
		for (int j = 0; j < M[0].size(); j++) {
			int sum = M[i][j], count = 1;
			for (int f = 0; f < sur.size(); f++) {
				int x = i + sur[f][0], y = j + sur[f][1];
				if (x >= 0 && y >= 0 && x < M.size() && y < M[0].size()) {
					sum += M[x][y];
					count++;
				}
			}
			res[i][j] = floor(sum / count);
		}
	}

	return res;
}

int main()
{
	vector<vector<int>> M = { {1, 1, 1},
		{ 1,0,1 },
		{ 1,1,1 } };
	Print(imageSmoother(M));
	M = { {2,3,4},{5,6,7},{8,9,10},{11,12,13},{14,15,16} };
	Print(imageSmoother(M));
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
