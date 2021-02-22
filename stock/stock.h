#pragma once
#include <iterator>
#include <tuple>
    template<typename Iter >
     std::pair<int, int> get_indices(Iter begin, Iter start, Iter end) {
        return std::make_pair(0,0);
    }
    template <typename Iter>
    std::pair<Iter, Iter> max_profit_interval(Iter start, Iter end) {
        return std::make_pair(start,end);
    }
    template <typename Iter>
    typename Iter::value_type  max_profit(Iter start, Iter end) {

        return 0;
    }
}
