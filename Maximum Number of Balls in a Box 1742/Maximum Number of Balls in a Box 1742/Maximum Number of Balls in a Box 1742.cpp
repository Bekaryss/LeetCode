// Maximum Number of Balls in a Box 1742.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getBox(int num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int countBalls(int lowLimit, int highLimit) {
	vector<int> boxes(45, 0);
	int res = 0;
	for (int i = lowLimit; i <= highLimit; i++) {
		int num = getBox(i);
		boxes[num - 1]++;
		res = max(res, boxes[num - 1]);
	}

	return res;
}

int main()
{
	std::cout << countBalls(1, 10)<< endl;
	std::cout << countBalls(5, 15) << endl;
	std::cout << countBalls(19, 28) << endl;
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
