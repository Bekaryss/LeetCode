// Add to Array-Form of Integer 989.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> addToArrayForm(vector<int>& num, int k) {
	for (int i = num.size() - 1; i >= 0 && k > 0; i--) {
		num[i] += k;
		k = num[i] / 10;
		num[i] %= 10;
	}
	while (k > 0) {
		num.insert(num.begin(), k % 10);
		k /= 10;
	}

	return num;
}

int main()
{
	vector<int> num = { 1, 2, 0, 0 };
	int k = 34;
	Print(addToArrayForm(num, k));

	num = { 1 };
	k = 999;
	Print(addToArrayForm(num, k));
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
