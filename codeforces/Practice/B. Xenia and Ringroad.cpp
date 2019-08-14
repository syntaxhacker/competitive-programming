#include <bits/stdc++.h>
using std::ifstream;
#define fri(i,n) 			for(lli i = 0 ; i < n;++i) 
#define jri(j,k,n) 		for(int j = k ; j >= n;j--) 
// Need to add a check to make sure you are not swapping the same // variable with itself. Otherwise it will zero the value.
#define swapnumsxor 	a ^= b; b ^= a; a ^= b
#define inp(i) 				cin >> i 
#define inp2(i,j) 		cin >> i >> j  
#define inp3(i,j,k) 	cin >> i >> j >> k
#define oup(i) 				cout << i << "\n"
#define oup2(i,j) 		cout << i << " "<<j<< "\n"
#define oup3(i,j,k) 	cout << i << " "<< j << " "<<k<< "\n"
#define MOD 1000000007
#define rmdup 				std::sort(str.begin(), str.end());str.erase(std::unique(str.begin(), str.end()), str.end());
typedef long long int lli;
typedef unsigned long long int ulli;
#define oo(x) cout << #x <<  " = " << x << "\n";
#define pb 		push_back
#define mp 		make_pair
#define mt 		make_tuple
#define MAXN 	1000000
const int INF = 0x3f3f3f3f;
using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::map;
using std::sort;
using std::__gcd;
using std::ios_base;
unsigned lcm(int a, int b) { return (a / __gcd(a, b) * b); }

int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
		// ifstream in("input.txt");
		lli n,m, ans = 0;
    inp2(n,m);
    lli a[m];
    fri(i,m){
      inp(a[i]);
    }
    fri(i,m)
    {
      if(i==0){ans=a[0]-1;}
        else{
        if(a[i]>=a[i-1])ans+=(a[i]-a[i-1]);
        else{
            ans+=(n-a[i-1]+a[i]);
        }}
    }
    
oup(ans);
    return 0;
}
