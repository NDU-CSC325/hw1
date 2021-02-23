/*****************************************************************//**
 * @file   hw1.cpp
 * @brief  Computing the max subarray sum
 * 
 * @author Hikmat Farhat
 * @date   February 2021
 *********************************************************************/
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>

#include "max_sub_sum.h"
//v{ -2,6,-1,2,-4 };

int main()
{
    const int n = 1 << 11;
    std::random_device rd;
    std::uniform_int_distribution<> dist(-100, 100);
    std::vector<int> v ( n);
   
    std::generate(v.begin(), v.end()
        , [&]() {
            return dist(rd);
        }
    );
    Duration d1,d2;
    int r1, r2;
    TIMEIT(d1
        ,r1= max_sub_sum(v.begin(),v.end());
    )
    std::cout << "divide & conquer result =" << r1 << "\n";
    std::cout << "divide & conquer duration =" <<d1.count() << " seconds\n";

    TIMEIT(d2
        ,r2=brute_max_sum(v.begin(), v.end());
    )
    std::cout << "exhaustive result =" << r2 << "\n";
    std::cout << "exhaustive duration =" <<d2.count() <<" seconds\n";
    std::cout << "ratio = " << d2.count() / d1.count() << "\n";
}

