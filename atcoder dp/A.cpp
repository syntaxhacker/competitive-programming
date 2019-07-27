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
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fa(x , n , v) fill(&(x)[0][0], &(x)[0][0] + (0 + n) *(0 + n) , (v))
#define ra(a) for(int &x : (a)) cin >> (x);
typedef long long int lli;
typedef unsigned long long int ulli;
const lli MOD = 1e9 + 7;
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vi h(n);
  ra(h);
  vi dp(n , INT_MAX);
  dp[0] = 0;
  fri(i,n)
  for(int j : {i+1 , i+2}){
  	if(j < n){
    dp[j] = min(dp[j] , dp[i] + abs(h[i] - h[j]));
  }
  }
  cout << dp[n-1];
  return 0;
}