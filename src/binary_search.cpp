// binary search algorithm
// array must already be sorted
// returns the index where val was found

#include<iostream>

long binary_search(long ary[], long, long);

int main() {
  long size = 16;
  long array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  std::cout << binary_search(array, size, 0) << std::endl;
  std::cout << binary_search(array, size, 1) << std::endl;
}

// returns the index where val was found or -1 if it wasn't found
long binary_search(long ary[], long size, long val) {
  long l = 0; // left index
  long r = size - 1; // right index

  while (l <= r) {
    long mid = l + (r - l) / 2;
    if (val < ary[mid])
      r = mid - 1;
    else if (val > ary[mid])
      l = mid + 1;
    else
      return mid;
  }
  return -1;
}
