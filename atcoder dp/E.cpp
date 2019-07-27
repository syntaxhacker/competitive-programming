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
#define frii(i , j , n) for (lli i = j; i < n; ++i)
#define ra(a) for(int &x : (a)) cin >> (x);
typedef long long int lli;
typedef unsigned long long int ulli;
const lli MOD = 1e9 + 7;
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>

inline void mi(lli &a , lli b){
  a = min(a , b);
}

inline void mx(lli &a , lli b){
  a = max(a , b);
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  lli n , w;
  cin >>  n >> w;
  vlli weights(n) , vals(n);
  frii(i , 0 ,n) cin >> weights[i] >> vals[i];
  lli sum_val = 0;
  for(int e : vals) sum_val+=e;
  vlli dp(sum_val +1  , __LONG_LONG_MAX__);
  dp[0] = 0;

  frii(i , 0 ,n){
    for(lli va = sum_val-vals[i] ; va >= 0  ; --va )
    {
      mi(dp[va + vals[i]] , dp[va] + weights[i]);
    }}
  lli ans = 0;
  for(lli i = 0 ;i <= sum_val; ++i){
    if(dp[i] <= w)
    ans = max(ans , i);
  }
  cout << ans;
  return 0;
}