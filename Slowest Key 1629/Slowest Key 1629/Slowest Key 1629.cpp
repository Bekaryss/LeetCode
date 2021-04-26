// Slowest Key 1629.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

char slowestKey(vector<int>& releaseTimes, string keysPressed) {
	int n = releaseTimes.size(), prev = 0, maxV = INT_MIN;
	char res = releaseTimes[0];
	for (int i = 0; i < n; i++) {
		int num = releaseTimes[i] - prev;
		prev = releaseTimes[i];
		if (maxV <= num) {
			if (maxV == num && keysPressed[i] > res) {
				res = keysPressed[i];
			}
			else if(maxV != num){
				res = keysPressed[i];
			}
			maxV = num;
		}
	}

	return res;
}

int main()
{
	vector<int> releaseTimes = { 9, 29, 49, 50 };
	string keysPressed = "cbcd";
	std::cout << slowestKey(releaseTimes, keysPressed) << endl;

	releaseTimes = { 12, 23, 36, 46, 62 };
	keysPressed = "spuda";
	std::cout << slowestKey(releaseTimes, keysPressed) << endl;

	releaseTimes = { 1, 2 };
	keysPressed = "ba";
	std::cout << slowestKey(releaseTimes, keysPressed) << endl;
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
