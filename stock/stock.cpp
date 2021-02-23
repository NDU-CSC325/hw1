

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <tuple>
#include "stock.h"

int main()
{
    std::vector<int> v{ 6,2,3,8,4,1,15};
    
    int result=max_profit(v.begin(), v.end());
    auto [itrs, itre] = max_profit_interval(v.begin(), v.end());
    auto [idx1,idx2]=get_indices(v.begin(), itrs, itre);
    std::cout << "max value=" << result << "\n";
    std::cout << "Buy at t= " << idx1 << "\n";
    std::cout << "Sell at t= " << idx2 << "\n";

}
