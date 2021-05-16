// Maximum Population Year 1854.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int maximumPopulation(vector<vector<int>>& logs) {
	vector<int> years(101, 0);
	for (auto i : logs) {
		years[i[0] - 1950]++;
		years[i[1] - 1950]--;
	}

	for (int i = 1; i < years.size(); i++) {
		years[i] += years[i - 1];
	}

	int maxV = 0, res = 0;

	for (int i = 0; i < years.size(); i++) {
		if (years[i] > maxV) {
			maxV = years[i];
			res = i + 1950;
		}
	}

	return res;
}

int main()
{
	vector<vector<int>> logs = { {1993,1999},{2000,2010} };
	std::cout << maximumPopulation(logs) << endl;

	logs = { {1950,1961},{1960,1971},{1970,1981} };
	std::cout << maximumPopulation(logs) << endl;

	logs = { {2033,2034},{2039,2047},{1998,2042},{2047,2048},{2025,2029},{2005,2044},{1990,1992},{1952,1956},{1984,2014} };
	std::cout << maximumPopulation(logs) << endl;
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
