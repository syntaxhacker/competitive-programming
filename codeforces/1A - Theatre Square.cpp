#include <math.h>
#include <iostream>
using std::cin;
using std::cout;
int main() {
  double n, m ,c;
  cin >> n >>  m  >> c;
  cout << ((long long)ceil(n/c) * (long long)ceil(m/c) );
}