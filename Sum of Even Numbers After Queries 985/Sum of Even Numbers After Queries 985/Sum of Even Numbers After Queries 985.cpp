// Sum of Even Numbers After Queries 985.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
	vector<int> res(A.size());
	int sum = 0;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] % 2 == 0) {
			sum += A[i];
		}
	}
	for (int i = 0; i < queries.size(); i++) {
		int val = queries[i][0], index = queries[i][1];
		if (A[index] % 2 == 0) {
			sum -= A[index];
		}
		A[index] += val;
		if (A[index] % 2 == 0) {
			sum += A[index];
		}
		res[i] = sum;
	}

	return res;
}

int main()
{
	vector<int> A = { 1,2,3,4 };
	vector<vector<int>> queries = { {1,0},{-3,1},{-4,0},{2,3} };
	Print(sumEvenAfterQueries(A, queries));

	A = { 3, 2 };
	queries = { {4, 0}, { 3,0 } };
	Print(sumEvenAfterQueries(A, queries));
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
