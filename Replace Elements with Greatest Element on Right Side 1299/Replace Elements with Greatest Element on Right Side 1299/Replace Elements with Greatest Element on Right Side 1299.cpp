// Replace Elements with Greatest Element on Right Side 1299.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void Print(vector<int> arr) {
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
}

vector<int> replaceElements(vector<int>& arr) {
	int greatest = -1;
	for (int i = arr.size() - 1; i >= 0; i--) {
		int cur = arr[i];
		arr[i] = greatest;
		greatest = max(cur, arr[i]);
	}
	return arr;
}

int main()
{
	vector<int> arr = { 17,18,5,4,6,1 };
	Print(replaceElements(arr));

	arr = { 400 };
	Print(replaceElements(arr));
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
