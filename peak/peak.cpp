// peak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "peak.h"
int main()
{
	std::vector<int> v{ 1,18,12,11,10,8 };
	int res = peak(v, 0, v.size() - 1);
	std::cout << res << "\n";
}
