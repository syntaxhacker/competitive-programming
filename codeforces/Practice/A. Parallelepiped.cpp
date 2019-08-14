#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int s1, s2, s3 , a,b,c ,sum; 
	cin >> s1 >> s2 >> s3; 
	a = sqrt(s1 * s2 / s3); 
	b = sqrt(s3 * s1 / s2); 
	c = sqrt(s3 * s2 / s1); 
  sum = a + b + c; 
	cout << 4 * sum; 

	return 0; 
} 
