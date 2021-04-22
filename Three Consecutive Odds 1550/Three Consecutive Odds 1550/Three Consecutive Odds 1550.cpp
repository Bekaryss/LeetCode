// Three Consecutive Odds 1550.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] % 2 == 0) {
			count = 0;
		}
		else if (++count == 3) {
			return true;
		}
	}

	return false;
}

int main()
{
	vector<int> arr = { 2,6,4,1 };
	std::cout << threeConsecutiveOdds(arr) << endl;
	arr = { 1,2,34,3,4,5,7,23,12 };
	std::cout << threeConsecutiveOdds(arr) << endl;
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
