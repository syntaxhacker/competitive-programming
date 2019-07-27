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
  vlli dp(w+1);
  frii(i , 0 ,n){
    lli we , val;
    cin >> we >> val;
    for(lli wa = w-we ; wa >= 0  ; --wa )
    {
      mx(dp[wa + we] , dp[wa] + val);
    }
  }
  lli ans = 0;
  for(lli i = 0 ;i <= w; ++i){
    mx(ans , dp[i]);
  }
  cout << ans;
  return 0;
}