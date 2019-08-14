#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
long long int be( long long int x, long long int y , long long int m ){
    x%=m;
    long long int z = 1 ; 
    while(y > 0){
        if(y&1){
            z = z * x  % m;
        }
        x = x*x % m;
        y>>=1;
    }
    return z;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long int t , x,y,m;
  cin >> t;
  while(t-- ){
  	m = 10;
    cin >> x >> y;
    cout << be(x,y,m) << "\n";
  }}