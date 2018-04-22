// euclid's algorithm
#include<iostream>

long gcd(long p, long q) {
  if (q == 0) return p;
  int r = p % q;
  return gcd(q, r);
}

int main() {
  long p = 23;
  long q = 444;
  std::cout << gcd(p, q) << std::endl;
}
