#include <bits/stdc++.h>
using namespace std;

#define oo(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
  cout << name << ": " << arg1 << "\n";
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{
  const char *comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << ": " << arg1 << " |";
  __f(comma + 1, args...);
}
unsigned lcm(int a, int b) { return (a / __gcd(a, b) * b); }
#define fri(i, n) for (int i = 0; i < n; ++i)
#define jri(j, k, n) for (int j = k; j >= n; j--)
#define swapnumsxor \
  a ^= b;           \
  b ^= a;           \
  a ^= b

typedef long long int lli;
typedef unsigned long long int ulli;
#define inp(i) cin >> i
#define inp2(i, j) cin >> i >> j
#define inp3(i, j, k) cin >> i >> j >> k
#define oup(i) cout << i
#define oup2(i, j) cout << i << " " << j
#define oup3(i, j, k) cout << i << " " << j << " " << k
const lli MOD = 1e9 + 7;
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>
#define vulli vector<ulli>
const int INF = 0x3f3f3f3f;
lli ans(lli a){
  lli sum = 0;
  while(a > 0){sum+=a%10,a/=10;}

  return sum;
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  lli n;
  inp(n);
  for(lli i = n ;;++i){
      
    if(ans(i)%4 == 0){oup(i);
      return 0;}
  }

}
