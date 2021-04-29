// Pascal's Triangle II 119.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> getRowSolution(int rowIndex) {
	vector<int> res(rowIndex + 1);
	res[0] = 1;
	for (int i = 1; i <= rowIndex; i++) {
		for (int j = i; j > 0; j--) {
			res[j] += res[j - 1];
		}
	}

	return res;
}

vector<int> getRow(int rowIndex) {
	vector<int> last = { 1 };
	for (int i = 1; i <= rowIndex; i++) {
		vector<int> cur(i + 1, 1);
		for (int i = 1; i < cur.size() - 1; i++) {
			cur[i] = last[i] + last[i - 1];
		}
		last = cur;
	}

	return last;
}

int main()
{
	Print(getRowSolution(3));
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
