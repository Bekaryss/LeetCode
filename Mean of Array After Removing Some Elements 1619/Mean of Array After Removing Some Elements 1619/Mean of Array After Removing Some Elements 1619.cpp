// Mean of Array After Removing Some Elements 1619.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

double trimMean(vector<int>& arr) {
    int mean = 0;
    int five = arr.size() * 5 / 100;
    sort(arr.begin(), arr.end());
    double sum = 0, count = 0;
    for (int i = five; i < arr.size() - five; i++) {
        sum += arr[i];
        count++;
    }
    std::setprecision(5);
    return sum / count;
}

int main()
{
    vector<int> arr = { 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3 };
    std::cout << trimMean(arr) << endl;
    arr = { 6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0 };
    std::cout << trimMean(arr) << endl;
    arr = { 6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4 };
    std::cout << trimMean(arr) << endl;
    arr = { 9,7,8,7,7,8,4,4,6,8,8,7,6,8,8,9,2,6,0,0,1,10,8,6,3,3,5,1,10,9,0,7,10,0,10,4,1,10,6,9,3,6,0,0,2,7,0,6,7,2,9,7,7,3,0,1,6,1,10,3 };
    std::cout << trimMean(arr) << endl;
    arr = { 4,8,4,10,0,7,1,3,7,8,8,3,4,1,6,2,1,1,8,0,9,8,0,3,9,10,3,10,1,10,7,3,2,1,4,9,10,7,6,4,0,8,5,1,2,1,6,2,5,0,7,10,9,10,3,7,10,5,8,5,7,6,7,6,10,9,5,10,5,5,7,2,10,7,7,8,2,0,1,1 };
    std::cout << trimMean(arr) << endl;
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
