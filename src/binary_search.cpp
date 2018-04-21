// binary search algorithm
// array must already be sorted
// returns the index val was found at

#include<iostream>
using namespace std;

// l is the left index (0) and r is the right index
// val is the value to search for
// returns -1 if no value found
template<typename T>
T binary_search(T[] ary, long l, long r, T val) {
  long mid = (l + r) / 2;

  while(ary[mid] != val){
    if(ary[mid] < val) {
      l = mid;
      mid += (r - l) / 2;
    } else if(ary[mid] > val) {
      r = mid;
      mid -= (r - l) / 2;
    } else {
      return mid;
    }
  }

}
