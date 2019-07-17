#include <bits/stdc++.h> 
using std::cin;
using std::cout;
bool nextPrime(int n) 
{ 
	if (n <= 1) return false; 
	if (n <= 3) return true; 
	if (n%2 == 0 || n%3 == 0) return false; 
	for (int i=5; i*i<=n; i=i+6) 
		if (n%i == 0 || n%(i+2) == 0) 
		return false; 
	return true; 
} 
int main() 
{ 
  int n,m;bool check = true;
  cin >> n >>m;
  while(check){
    n++;
    check = !(nextPrime(n));
  }
	(n !=m) ? cout << "NO" : cout << "YES";
	return 0; 
} 
