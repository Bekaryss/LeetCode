// Number of Students Unable to Eat Lunch 1700.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
	int i = 0;
	int size = 0, j = 0;
	while (i < sandwiches.size() && j < students.size()) {
		if (sandwiches[i] == students[j])
		{
			sandwiches[i++] = 2;
			students[j++] = 2;
		}
		else {
			j++;
		}
		if (j == students.size()) {
			j = 0;
			size++;
			if (size > students.size()) {
				return sandwiches.size() - i;
			}
		}
	}
	return 0;
}

int main()
{
	vector<int> students = { 1, 1, 0, 0 }, sandwiches = { 0, 1, 0, 1 };
	std::cout << countStudents(students, sandwiches) << endl;

	students = { 1, 1, 1, 0, 0, 1 }, sandwiches = { 1, 0, 0, 0, 1, 1 };
	std::cout << countStudents(students, sandwiches) << endl;

	students = { 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1 };
	sandwiches = { 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0 };
	std::cout << countStudents(students, sandwiches) << endl;
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
