#pragma once
#include <iterator>
#include <optional>
#include <algorithm>

int peak(std::vector<int>& v,int start,int end) {
		for(int i=1;i<v.size()-1;++i)
			if(v[i]>v[i-1]&& v[i]>v[i+1])return i;
		return -1;	
}