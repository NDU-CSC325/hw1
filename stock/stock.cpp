

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <tuple>

template<typename Iter >
 std::pair<int, int> get_indices(Iter begin, Iter start, Iter end) {
  
    return std::make_pair(1,2);
}
template <typename Iter>
std::pair<Iter,Iter> max_profit_interval(Iter start, Iter end) {
    
    return std::make_pair(start,start);
}
template <typename Iter>
typename Iter::value_type  max_profit(Iter start, Iter end) {
   
    return  *start;
}

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
