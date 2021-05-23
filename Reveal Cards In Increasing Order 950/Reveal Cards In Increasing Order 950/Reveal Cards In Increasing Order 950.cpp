// Reveal Cards In Increasing Order 950.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> deckRevealedIncreasing(vector<int>& deck) {
	sort(deck.begin(), deck.end());
	int n = deck.size() - 1;
	vector<int> res = { deck[n] };
	for (int i = n - 1; i >= 0; i--) {
		res.insert(res.begin(), res.back());
		res.pop_back();
		res.insert(res.begin(), deck[i]);
	}

	return res;
}

void Print(vector<int> res) {
	for (int i : res) {
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> deck = { 17,13,11,2,3,5,7 };
	Print(deckRevealedIncreasing(deck));
	deck = { 17,13,11,2,3,5 };
	Print(deckRevealedIncreasing(deck));
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
