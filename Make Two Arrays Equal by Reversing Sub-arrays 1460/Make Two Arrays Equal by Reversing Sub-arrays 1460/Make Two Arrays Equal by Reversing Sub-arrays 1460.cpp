// Make Two Arrays Equal by Reversing Sub-arrays 1460.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool canBeEqual(vector<int>& target, vector<int>& arr) {
	int sum = 0, x = 0;
	for (int i = 0; i < target.size(); i++) {
		sum += target[i] - arr[i];
		x ^= target[i] ^ arr[i];
	}

	return sum == 0 && x == 0;
}

bool canBeEqualSolution(vector<int>& target, vector<int>& arr) {
	vector<int> counter(1001);
	for (int i = 0; i < target.size(); i++) {
		counter[target[i]]++;
		counter[arr[i]]--;
	}
	for (int i : counter) {
		if (i != 0) {
			return false;
		}
	}

	return true;
}

int main()
{
	vector<int> target = { 1,2,3,4 }, arr = { 2,4,1,3 };
	std::cout << canBeEqual(target, arr) << endl;

	target = { 7 }, arr = { 7 };
	std::cout << canBeEqual(target, arr) << endl;

	target = { 1,12 }, arr = { 12,1 };
	std::cout << canBeEqual(target, arr) << endl;

	target = { 3,7,9 }, arr = { 3,7,11 };
	std::cout << canBeEqual(target, arr) << endl;

	target = { 1,1,1,1,1 }, arr = { 1,1,1,1,1 };
	std::cout << canBeEqual(target, arr) << endl;

	target = { 1,2,3 }, arr = { 2,2,2 };
	std::cout << canBeEqual(target, arr) << endl;

	target = { 2,3 }, arr = { 6,7 };
	std::cout << canBeEqual(target, arr) << endl;
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
