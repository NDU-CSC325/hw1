# CSC325 Homework Assignment 1

This assignment has 6 questions arranged in 3 groups.

## Maximum subarray sum
 
 Implement the two versions of the maximum subarray sum we discussed in class: the brute force
 and the divide and conquer. Write your implementations in the skeleton file 
 ```max_sub_sum/max_sub_sum.h```. The file ```max_sub_sum/max_sub_sum.cpp``` is for your convenience it will __not__ be used by autograding.
  
### Brute force (18pts)

Implement the function
```cpp
template <typename Iter>
int brute_max_sum(Iter start, Iter end)
{
    return 0;
}
```
Keep the signature as it is, write the body.
### Divide and conquer (18pts)
Implement the function 
```cpp
int max_sub_sum(Iter start, Iter end)
{
    return 0;
}
```
Keep the signature as it is, write the body.

## Peak (18 pts)
You are given an array _A_ with _n_ elements and the following properties:

1. Either it is sorted or

1. There exists an index _k_ such that the array is sorted from 0 to k and 
sorted in reverse from k to n-1. 

In other words, there exists ```0<k<n-1``` such that   for all ```i<j<k``` and ```i>j>k``` we have ```A[i]<=A[j]<A[k]``` 

Below is the sequential implementation 
```cpp
int peak(std::vector<int>& v,int start,int end) {
		for(int i=1;i<v.size()-1;++i)
			if(v[i]>v[i-1]&& v[i]>v[i+1])return i;
		return -1;	
}
```
Replace the above with a divide and conquer implementation.
Write your implementations in the skeleton file 
 ```peak/peak.h```. The file ```peak/peak.cpp``` is for your convenience it will __not__ be used by autograding.

## Stock

You are given an input array _A_ with _n positive_ elements. Each element is the value of a stock at
that point (time). Assuming are given this future information you need to decide when to buy and sell
the stock to make maximum profit (i.e. sell - buy).

Write your implementations in the skeleton file 
 ```stock/stock.h```. The file ```stock/stock.cpp``` is for your convenience it will __not__ be used by autograding.


### max_profit (18 pts)

Implement, using divide and conquer, the function below which returns the maximum possible profit.

```cpp
template <typename Iter>
    typename Iter::value_type  max_profit(Iter start, Iter end) {

        return 0;
    }
```
### Buy and Sell (18 pts)
Implement, using divide and conquer, the function below which returns a pair of iterators pointing to the buying/selling values
respectively.

```cpp
  template <typename Iter>
    std::pair<Iter, Iter> max_profit_interval(Iter start, Iter end) {
        return std::make_pair(start,end);
    }
```

### Return the times (18 pts)

Implement the function below which returns the _indices_ of the buying selling values, given:

1.begin=iterator to the beginning of the container (e.g. vector), 
1. start=iterator to buying element
1. end=iterator to selling element
