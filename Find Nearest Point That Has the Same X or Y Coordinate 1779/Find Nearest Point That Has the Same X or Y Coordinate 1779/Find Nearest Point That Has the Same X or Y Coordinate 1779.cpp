// Find Nearest Point That Has the Same X or Y Coordinate 1779.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
	int res = -1, minV = INT_MAX;
	for (int i = 0; i < points.size(); i++) {
		if (x == points[i][0] || y == points[i][1]) {
			int md = abs(x - points[i][0]) + abs(y - points[i][1]);
			if (minV > md) {
				minV = md;
				res = i;
			}
		}
	}

	return res;
}

int main()
{
	int x = 3, y = 4;
	vector<vector<int>> points = { {1,2},{3,1},{2,4},{2,3},{4,4} };
	std::cout << nearestValidPoint(x, y, points) << endl;

	x = 3, y = 4;
	points = { {2, 3} };
	std::cout << nearestValidPoint(x, y, points) << endl;
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
