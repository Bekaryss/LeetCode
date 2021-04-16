// Final Prices With a Special Discount in a Shop 1475.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> finalPrices(vector<int>& prices) {
	for (int i = 0; i < prices.size(); i++) {
		int localMin = prices[i];
		bool set = false;
		for (int j = i + 1; j < prices.size(); j++) {
			if (localMin >= prices[j]) {
				localMin = prices[j];
				set = true;
				break;
			}
		}
		if (set == true)
			prices[i] = abs(prices[i] - localMin);
	}

	return prices;
}

vector<int> finalPricesSolution(vector<int>& prices) {
	vector<int> stack;
	for (int i = 0; i < prices.size(); ++i) {
		while (stack.size() > 0 && prices[stack.back()] >= prices[i]) {
			prices[stack.back()] -= prices[i];
			stack.pop_back();
		}
		stack.push_back(i);
	}

	return prices;
}

int main()
{
	vector<int> prices = { 8, 4, 6, 2, 3 };
	Print(finalPricesSolution(prices));

	prices = { 1, 4, 6, 2, 3 };
	Print(finalPricesSolution(prices));
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
