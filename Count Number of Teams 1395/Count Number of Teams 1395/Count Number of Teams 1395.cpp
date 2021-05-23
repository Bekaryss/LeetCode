// Count Number of Teams 1395.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int numTeams(vector<int>& rating) {
	int n = rating.size(), result = 0;
	for (int i = 0; i < n; i++) {
		int smallL = 0, largeL = 0, smallR = 0, largeR = 0;
		for (int j = 0; j < i; j++) {
			if (rating[j] < rating[i])
				smallL++;
			if (rating[j] > rating[i])
				largeL++;
		}
		for (int j = i + 1; j < n; j++) {
			if (rating[j] < rating[i])
				smallR++;
			if (rating[j] > rating[i])
				largeR++;
		}

		result += smallL * largeR + largeL * smallR;
	}

	return result;
}

int main()
{
	vector<int> rating = { 2, 5, 3, 4, 1 };
	std::cout << numTeams(rating) << endl;

	rating = { 2032,2688,1116,1016,1476,2117,2178,144,52,1811,1684,1866,895,2393,2632,508,653,2000,1393,369,1897,171,2492,2583,1319,2756,206,136,1922,1806,1952,462,379,2266,1453,20,172,1242,2545,853,1536,1958,491,313,1265,1104,1888,673,1953,1820,1313,2293,1174,767,929,611,665,2626,393,2052,1149,1362,2051,21,1959,189,199,1558,1382,583,2466,1096,105,1515,2001,2549,308,2329,1048,2563,2372,1152,2976,234,1859,2581,196,2555,1280,557,2067,1068,1962,2433,1401,1559,972,1595,2744,1225,978,758,181,1840,2547,2403,154,2711,1475,2014,648,2081,1785,2044,166,2249,1413,1144,1070,734,2239,484,2785,2907,96,1561,2156,1972,2321,801,692,1711,1577,1933,2497,161,582,1271,1974,149,1852,724,1854,2130,754,82,1833,1813,1300,322,1674,1798,440,348,2576,2388,2591,1816,2356,1202,2243,1301,1628,741,900,1752,2020,1119,1479,721,745,186,2007,2676,2822,1112,182,2337,122,2502,2515,2734,409,2074,2931,573,2245,2700,1658,2641,94,2216,2513,908,1555,952,1266,784,2928,2102,1893,2048,1901,1272,956,2065,472,2609,2755,768,1697,1195,2899,213,2789 };
	std::cout << numTeams(rating) << endl;
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
