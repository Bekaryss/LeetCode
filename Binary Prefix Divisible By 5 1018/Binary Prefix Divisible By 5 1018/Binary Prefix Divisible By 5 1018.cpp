// Binary Prefix Divisible By 5 1018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> prefixesDivBy5(vector<int>& A) {
	vector<bool> res;
	int num = 0;
	for (int i = 0; i < A.size(); i++) {
		num = (num * 2 + A[i]) % 5;
		res.push_back(num == 0);
	}

	return res;
}

void Print(vector<bool> res) {
	for (auto i : res) {
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> A = { 0, 1, 1 };
	Print(prefixesDivBy5(A));
	A = { 1, 1, 1 };
	Print(prefixesDivBy5(A));
	A = { 0,1,1,1,1,1 };
	Print(prefixesDivBy5(A));
	A = { 1,1,1,0,1 };
	Print(prefixesDivBy5(A));
	A = { 1,0,0,1,0,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,0,0,0,0,1,1,0,1,0,0,0,1 };
	Print(prefixesDivBy5(A));
	A = { 1,0,1,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,1,1,1,1,1,0,0,0,1,0,1,1,1,1,0,1,1,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,1,1,0,0,1,1,1 };
	Print(prefixesDivBy5(A));
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
