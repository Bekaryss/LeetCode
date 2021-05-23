// Queries on a Permutation With Key 1409.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> processQueries(vector<int>& queries, int m) {
	vector<int> res;
	stack<int> p;
	for (int i = m; i >= 1; i--) {
		p.push(i);
	}

	for (int i = 0; i < queries.size(); i++) {
		int j = 0;
		vector<int> local;
		while (queries[i] != p.top()) {
			local.insert(local.begin(), p.top());
			p.pop();
			j++;
		}
		int cur = p.top();
		p.pop();
		for (int f : local) {
			p.push(f);
		}
		p.push(cur);
		res.push_back(j);
	}

	return res;
}

vector<int> processQueriesSolution(vector<int>& queries, int m) {
	vector<int> idx, res;
	for (int i = 0; i < m; i++)
		idx.push_back(i);

	for (int i = 0; i < queries.size(); i++) {
		int cur = idx[queries[i] - 1];
		res.push_back(cur);
		for (int j = 0; j < m; j++) {
			if (idx[j] < cur) idx[j]++;
		}
		idx[queries[i] - 1] = 0;
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
	vector<int> queries = { 3, 1, 2, 1 };
	int m = 5;
	Print(processQueriesSolution(queries, m));
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
