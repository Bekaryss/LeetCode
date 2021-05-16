// Detect Pattern of Length M Repeated K or More Times 1566.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool containsPattern(vector<int>& arr, int m, int k) {
	int n = arr.size() - 1;
	int res = 0, s = 0, lres = 1;
	bool con = true;
	for (int i = 0, j = m; i <= n - m && j <= n; i++, j++) {
		if (arr[i] == arr[j]) {
			s++;
			con = true;
		}
		else {
			s = 0;
			con = false;
		}
		if (s == m && con == true) {
			lres++;
			res = max(lres, res);
			s = 0;
		}

		if (con == false) {
			lres = 1;
		}
	}

	return res >= k;
}

bool containsPatternSolution(vector<int>& arr, int m, int k) {
	int cnt = 0;
	for (int i = 0; i + m < arr.size(); i++) {

		if (arr[i] != arr[i + m]) {
			cnt = 0;
		}
		cnt += (arr[i] == arr[i + m]);
		if (cnt == (k - 1) * m)
			return true;

	}
	return false;
}

int main()
{
	vector<int> arr = { 1, 2, 4, 4, 4, 4 };
	int m = 1, k = 3;
	std::cout << containsPattern(arr, m, k) << endl;

	arr = { 1, 2, 1, 2, 1, 1, 1, 3 }; m = 2, k = 2;
	std::cout << containsPattern(arr, m, k) << endl;

	arr = { 1, 2, 1, 2, 1, 3 }; m = 2, k = 3;
	std::cout << containsPattern(arr, m, k) << endl;

	arr = { 1, 2, 3, 1, 2 }; m = 2, k = 2;
	std::cout << containsPattern(arr, m, k) << endl;

	arr = { 2, 2, 2, 2 }; m = 2, k = 3;
	std::cout << containsPattern(arr, m, k) << endl;

	arr = { 2, 2 }; m = 1, k = 2;
	std::cout << containsPattern(arr, m, k) << endl;
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
