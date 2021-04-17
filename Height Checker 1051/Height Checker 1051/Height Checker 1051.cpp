// Height Checker 1051.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> expected = heights;
    sort(expected.begin(), expected.end());
    int res = 0;
    for (int i = 0; i < heights.size(); i++) {
        if (heights[i] != expected[i]) {
            res++;
        }
    }

    return res;
}

int main()
{
    vector<int> heights = { 1, 1, 4, 2, 1, 3 };
    std::cout << heightChecker(heights);
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
