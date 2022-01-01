#include <iostream>
using namespace std;

int gcd_naive(int a, int b) {
  // taking default as 1
  int current_gcd = 1;
  // looping from 2 to upto lesser than a and b
  for (int d = 2; d <= a && d <= b; d++) {
    // if divisor is found assign it to the current_gcd
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  // after looping we will have the Highest common factor or GCD
  return current_gcd;
}

// Euclidean algorithm or Long division method
long gcd_fast(int a, int b) {
  // taking bigger no x and smaller y
  long x = std::max(a,b), y = std::min(a,b);
  // taking modulo of x and y
  long result = x%y;
  // doing module of x%y until the remainder is 0
  while (result!=0) {
    long temp = y%result;
    y = result;
    result = temp;
  }
  return y;
}

int main() {
  int a=28851538, b = 1183019;
  // std::cin >> a >> b;
  // std::cout << gcd_fast(a, b) << " "<<gcd_naive(a, b) << std::endl;
  // std::cout << gcd_naive(a, b);
  std::cout << gcd_fast(a, b);
  return 0;
}

