// Rank Transform of an Array 1331.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void Print(vector<int> res) {
	for (int i : res) {
		cout << i << " ";
	}

	cout << endl;
}

vector<int> arrayRankTransform(vector<int>& arr) {
	vector<int> sArr(arr);
	sort(sArr.begin(), sArr.end());
	unordered_map<int, int> dict;
	for (int j = 0; j < sArr.size(); j++) {
		if(dict.find(sArr[j]) == dict.end())
			dict[sArr[j]] = dict.size() + 1;
	}
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = dict[arr[i]];
	}

	return arr;
}

int main()
{
	vector<int> arr = { 40, 10, 20, 30 };
	Print(arrayRankTransform(arr));
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
