// Most Visited Sector in a Circular Track 1560.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> mostVisited(int n, vector<int>& rounds) {
	vector<int> sectors(n + 1);
	int maxV = 0;
	for (int i = 1; i < rounds.size(); i++) {
		int l = rounds[i - 1];
		int r = rounds[i];

		while (l != r) {
			maxV = max(++sectors[l++], maxV);
			if (l > n) {
				l = 1;
			}
		}
	}
	maxV = max(++sectors[rounds[rounds.size() - 1]], maxV);
	vector<int> res;
	for (int i = 1; i < sectors.size(); i++) {
		if (sectors[i] == maxV) {
			res.push_back(i);
		}
	}


	return res;
}

int main()
{
	int n = 4;
	vector<int> rounds = { 1, 3, 1, 2 };
	Print(mostVisited(n, rounds));

	n = 2;
	rounds = { 2, 1, 2, 1, 2, 1, 2, 1, 2 };
	Print(mostVisited(n, rounds));

	n = 7;
	rounds = { 1, 3, 5, 7 };
	Print(mostVisited(n, rounds));

	n = 3;
	rounds = { 3, 2, 1, 2, 1, 3, 2, 1, 2, 1, 3, 2, 3, 1 };
	Print(mostVisited(n, rounds));
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
