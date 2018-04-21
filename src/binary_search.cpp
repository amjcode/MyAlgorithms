// binary search algorithm
// array must already be sorted
// returns the index val was found at

#include<iostream>
using namespace std;

long binary_search(long ary[], long, long, long);

int main() {
  long l = 0;
  long r = 15;
  long val = 7;
  long array[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  cout << binary_search(array, l, r, val) << endl;
}

// l is the left index (0) and r is the right index
// val is the value to search for
// returns -1 if no value found
long binary_search(long ary[], long l, long r, long val) {
  long mid = l + (r - l) / 2;

  while(ary[mid] != val){
    if(ary[mid] < val) {
      l = mid;
      mid += (r - l) / 2;
    } else if(ary[mid] > val) {
      r = mid;
      mid -= (r - l) / 2;
    }
  }
  return mid;
}
