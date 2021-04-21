// Count Largest Group 1399.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int countLargestGroup(int n) {
	vector<int> group(46);
	int maxV = 0, res = 0;
	for (int i = 1; i <= n; i++) {
		int j = i, sum = 0;
		while (j > 0) {
			sum += j % 10;
			j /= 10;
		}
		group[sum]++;
		maxV = max(maxV, group[sum]);
	}

	for (int i = 0; i < group.size(); i++) {
		if (group[i] == maxV) {
			res++;
		}
	}

	return res;
}

int main()
{
	std::cout << countLargestGroup(13) << endl;
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
