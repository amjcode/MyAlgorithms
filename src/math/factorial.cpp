// factorial that works up to 20

#include<iostream>

long factorial(long n) {
  if(n < 0)
    return -1; // invalid input
  long result = 1;
  while(n > 1) {
    result *= n;
    --n;
  }
  return result;
}

long Factorial(long n) {
  if(n < 0)
    return -1; // invalid input
  if(n > 1)
    return n * Factorial(n-1);
  else
    return 1;
}

int main() {
  long num = 21;
  long num2 = 21;
  std::cout << factorial(num) << std::endl;
  std::cout << factorial(num2) << std::endl;
  std::cout << Factorial(num) << std::endl;
  std::cout << Factorial(num2) << std::endl;
}
