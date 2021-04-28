// Distance Between Bus Stops 1184.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
	int i = start, j = start, n = distance.size();
	int dist = 0, rdist = 0;
	while (i != destination) {
		dist += distance[i];
		i = (i + 1) % n;
	}
	while (j != destination) {
		if (--j < 0) {
			j = n + j;
		}
		rdist += distance[j];
	}

	return min(dist, rdist);
}

int main()
{
	vector<int> distance = { 1, 2, 3, 4 };
	int start = 0, destination = 1;
	std::cout << distanceBetweenBusStops(distance, start, destination) << endl;

	distance = { 1, 2, 3, 4 };
	start = 0, destination = 2;
	std::cout << distanceBetweenBusStops(distance, start, destination) << endl;

	distance = { 1, 2, 3, 4 };
	start = 0, destination = 3;
	std::cout << distanceBetweenBusStops(distance, start, destination) << endl;
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
