// ind N Unique Integers Sum up to Zero 1304.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> sumZero(int n) {
	int mid = n / 2;
	vector<int> res;
	for (int i = mid, j = -mid; i > 0 && j < 0; i--, j++) {
		res.push_back(i);
		res.push_back(j);
	}
	if (res.size() < n) {
		res.push_back(0);
	}

	return res;
}

int main()
{
	Print(sumZero(5));
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
