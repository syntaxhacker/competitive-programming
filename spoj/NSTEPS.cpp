#include <bits/stdc++.h>
using std::ifstream;
using std::pair;
#define fri(i,n) for(int i = 0 ; i < n;++i) //inc from front
#define jri(j,k,n) for(int j = k ; j >= n;j--) //dec frm last
// Need to add a check to make sure you are not swapping the same // variable with itself. Otherwise it will zero the value.
#define swapnumsxor a ^= b; b ^= a; a ^= b
#define inp(i) cin >> i 
#define inp2(i,j) cin >> i >> j 
#define inp3(i,j,k) cin >> i >> j >> k
#define oup(i) cout << i << "\n"
#define oup2(i,j) cout << i << " "<<j<< "\n"
#define oup3(i,j,k) cout << i << " "<< j << " "<<k<< "\n"
#define oups(i) cout << i << " "
#define toup(i) cout << "output - "<<  i << "\n"
#define mod 1e9 + 7
#define rmdup std::sort(str.begin(), str.end());str.erase(std::unique(str.begin(), str.end()), str.end());
typedef long long int lli;
// typedef pair<int,int> pii;
// typedef vector<int> vec;
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define MAXN 1000000
using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::map;
using std::sort;
using std::ios_base;
unsigned gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
unsigned lcm(int a, int b) { return (a / gcd(a, b) * b); }
// int nCr(int n,int r){
//     int res = 1 ;
//     r = min(r,n-r) ; // nCr = nC(n-r) 
//     for(int i=r;i>=1;i--){
//         res = res * n ;
//         res /= i ;
//         n -- ; 
//     }

//     return res ;
// }
int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
		// ifstream in("input.txt");
		int t,x,y;
    inp(t);
    while(t--){
      inp2(x,y);
      if( x != y && x-y !=2){
        oup("No Number");
      }
      else if( (x&1) !=1 && ((y&1) !=1)){
         oup(x+y); 
        }else{ oup(x+y-1); }
    }
    return 0;
}
