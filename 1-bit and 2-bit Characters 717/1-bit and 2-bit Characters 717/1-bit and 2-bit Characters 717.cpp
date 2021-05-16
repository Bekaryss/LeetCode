// 1-bit and 2-bit Characters 717.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool isOneBitCharacter(vector<int>& bits) {
	int i = 0;
	while (i < bits.size()) {
		if (bits[i] == 0) {
			i++;
			if (i == bits.size()) {
				return true;
			}
		}
		else if (i < bits.size() - 2 && (bits[i] == 1 && (bits[i + 1] == 0 || bits[i + 1] == 1))) {
			i += 2;
		}
		else {
			break;
		}
	}

	return false;
}

int main()
{
	vector<int> bits = { 1, 0, 0 };
	std::cout << isOneBitCharacter(bits) << endl;
	bits = { 1, 1, 1, 0 };
	std::cout << isOneBitCharacter(bits) << endl;
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
