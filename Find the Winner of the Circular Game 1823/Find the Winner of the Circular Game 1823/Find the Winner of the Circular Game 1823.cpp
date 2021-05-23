// Find the Winner of the Circular Game 1823.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std;

int findTheWinner(int n, int k) {
	list<int> circle;
	for (int i = 1; i <= n; i++) {
		circle.push_back(i);
	}
	int i = 0;
	while (circle.size() > 1) {
		int j = (i + k - 1) % circle.size();
		auto index = next(circle.begin(), j);
		circle.remove(*index);
		i = j;
	}

	return circle.front();
}

int findTheWinnerSolution(int n, int k) {
	int res = 0;
	for (int i = 1; i <= n; ++i)
		res = (res + k) % i;
	return res + 1;
}

int main()
{
	int n = 5, k = 2;
	std::cout << findTheWinnerSolution(n, k) << endl;
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
