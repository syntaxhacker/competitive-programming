// by rohit j
// using sieve of Eratosthenes algorithm
#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
int main() {
  int n;
  cin >> n;
  int a[n];
  int m = sqrt(n);
  for(int i = 0 ; i < n ; i++ ){
    a[i] = 1;
  }
  a[0] = 0;
  a[1] = 0;
  for(int i = 2 ; i <= m ; i++ ){
    if(a[i]){
      for(int j = i*i ; j <= n ; j+=i ){
        a[j] = 0;
      }
    }
  }

   for(int i = 0 ; i < n ; i++ ){
    if(a[i]){
      cout <<  i  << " ";
    }
  } 
  return 0;
}