// Plus One 66.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	int n = digits.size() - 1;
	int last = 1;
	for (int i = n; i >= 0; i--)
	{
		if (last == 1) {
			digits[i] += last;
			last = digits[i] == 10 ? 1 : 0;
			digits[i] %= 10;
		}
	}
	if (last == 1) {
		digits.insert(digits.begin(), last);
	}

	return digits;
}

void Print(vector<int> res) {
	for (int i : res) {
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> digits = { 1, 2, 3 };
	Print(plusOne(digits));

	digits = { 6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3 };
	Print(plusOne(digits));

	digits = { 9,9,9 };
	Print(plusOne(digits));
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
