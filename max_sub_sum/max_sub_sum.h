#pragma once
#include <chrono>
#include <iterator>
#include <algorithm>
#include <chrono>
using Duration = std::chrono::duration<double, std::milli>;

#define TIMEIT(dur,...)\
   {\
    auto start = std::chrono::high_resolution_clock::now();\
    __VA_ARGS__\
    auto end = std::chrono::high_resolution_clock::now();\
     dur = std::chrono::duration<double, std::milli>(end - start);\
}
template <typename Iter>

int max_sub_sum(Iter start, Iter end)
{
    return 0;
}
template <typename Iter>
int brute_max_sum(Iter start, Iter end)
{
    return 0;
}
