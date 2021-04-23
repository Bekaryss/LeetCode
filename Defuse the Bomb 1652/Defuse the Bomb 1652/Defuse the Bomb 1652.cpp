// Defuse the Bomb 1652.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> decrypt(vector<int>& code, int k) {
	int n = code.size();
	vector<int> res(n, 0);
	for (int i = 0; i < n; i++) {
		int num = 0;
		int j = i;
		if (k != 0) {
			while (num < abs(k)) {
				j += k > 0 ? 1 : -1;
				if (j >= n) {
					j -= n;
				}
				if (j < 0) {
					j = n + j;
				}
				res[i] += code[j];
				num++;
			}
		}
	}

	return res;
}

int main()
{
	vector<int> code = { 5, 7, 1, 4 };
	int k = 3;
	Print(decrypt(code, k));

	code = { 2, 4, 9, 3 };
	k = -2;
	Print(decrypt(code, k));
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
