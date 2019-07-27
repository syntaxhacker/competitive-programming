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
#define frii(i , j , n) for (int i = j; i < n; ++i)
#define ra(a) for(int &x : (a)) cin >> (x);
typedef long long int lli;
typedef unsigned long long int ulli;
const lli MOD = 1e9 + 7;
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>

inline void mi(int &a , int b){
  a = min(a , b);
}

inline void mx(int &a , int b){
  a = max(a , b);
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a, b;
  cin >> a >> b;
  vector< vi > dp(a.length() + 1 , vi (b.length()+1 , 0));
  
  frii(i,0,a.length())
  frii(j,0,b.length()){
	  if(  a[i] == b[j]){
	    mx(dp[i+1][j+1] , dp[i][j]+1 );
	  }
	  mx(dp[i+1][j] , dp[i][j]);
	  mx(dp[i][j+1] , dp[i][j]);
  }
  int ans = 0;
  for(auto row : dp)
  for(int val: row)
  mx(ans , val);
  
  frii(i,0,a.length()+1){
	  frii(j,0,b.length()+1){
	  cout << dp[i][j] << " ";		
	  }
	  cout << endl;
  }
  cout << ans;
  return 0;
}