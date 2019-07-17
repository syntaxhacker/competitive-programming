#include <bits/stdc++.h>
using std::cin;
using std::ifstream;
using std::cout;
using std::vector;
using std::string;
using std::map;
using std::cerr;
using std::endl;
using std::min;
using std::sort;
using std::__gcd;
using std::ios_base;

#define oo(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << ": " << arg1 << " |";
  __f(comma + 1, args...);
}
unsigned lcm(int a, int b) { return (a / __gcd(a, b) * b); }
#define fri(i,n) 			for(int i = 0 ; i < n;++i) 
#define jri(j,k,n) 		for(int j = k ; j >= n;j--) 
#define swapnumsxor 	a ^= b; b ^= a; a ^= b
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
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
#define pb 		emplace_back
#define mp 		make_pair
#define MAXN 	1000000
const int INF = 0x3f3f3f3f;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    ulli n;
    inp(t);
    while (t--) {
      inp(n);
      ulli ans = 0;
      bool f = 0;
      while (n > 1) {
        if (n % 2 == 0) {
          n= n >> 1 ;
          ans++;
        } else if (n % 3 == 0) {
          n /= 3;
          n <<= 1;
          ans++;
        } else if (n % 5 == 0) {
          n/= 5;
          n <<=2;
          ans++;
        }else{
            oup("-1");
            f = 1;break;
        }
      }
      if(!f) oup(ans);
      }
      
      return 0;
    }