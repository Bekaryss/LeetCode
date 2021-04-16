// Sort Array By Parity 905.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<int> sortArrayByParityNewArray(vector<int>& A) {
	vector<int> even, odd;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] % 2 == 0) {
			even.push_back(A[i]);
		}
		else {
			odd.push_back(A[i]);
		}
	}
	even.insert(even.end(), odd.begin(), odd.end());
	return even;
}

vector<int> sortArrayByParity(vector<int>& A) {
	for (int i = 0, j = 0; j < A.size(); j++) {
		if (A[j] % 2 == 0) {
			swap(A[i++], A[j]);
		}
	}

	return A;
}

int main()
{
	vector<int> input = { 3,1,2,4 };
	Print(sortArrayByParity(input));
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
