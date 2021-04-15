// Flipping an Image 832.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
	for (int i = 0; i < image.size(); i++) {
		int row = image[i].size() - 1;
		for (int j = 0; j <= row / 2; j++) {
			if (j == row - j) {
				image[i][j] = image[i][row - j] == 1 ? 0 : 1;
			}
			else {
				int temp = image[i][j];
				image[i][j] = image[i][row - j] == 1 ? 0 : 1;
				image[i][row - j] = temp == 1 ? 0 : 1;
			}

		}
	}

	return image;
}

void Print(vector<vector<int>> res) {
	for (auto i : res) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	vector<vector<int>> image = { {1, 1, 0},
								  {1, 0, 1},
								  {0, 0, 0} };
	Print(flipAndInvertImage(image));

	image = { {1,1,0,0},
			  {1,0,0,1},
			  {0,1,1,1},
			  {1,0,1,0} };
	Print(flipAndInvertImage(image));

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
