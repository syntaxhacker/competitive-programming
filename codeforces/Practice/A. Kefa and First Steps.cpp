#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
/*------------------junk----------------------*/
#define TMP template<typename
#define oo(...) __f(#__VA_ARGS__, __VA_ARGS__)
TMP Arg1>
void __f(const char *name, Arg1 &&arg1)
{cout << name << ": " << arg1 << "\n";}
TMP Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{const char *comma = strchr(names + 1, ',');cout.write(names, comma - names) << ": " << arg1 << " |";__f(comma + 1, args...);
}
TMP... T>
void in(T&... args){
((cin >> args) , ...);
}
TMP... T>
void oup(T&... args){
((cout << args <<"\n") , ...);
}
typedef long long int lli;
typedef unsigned long long int ulli;
const int MOD = 1e9 + 7;
#define F first
#define S second
#define fri(i, j , n) for (int i = j; i < n; ++i)
#define frie(i, j , n) for (int i = j; i <= n; ++i)
#define frb(i,j, n) for (int i = j; i >= n; i--)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define rall(x) (x).rbegin(),(x).rend()
#define fa(x , n , v) fill(&(x)[0][0], &(x)[0][0] + (0 + n) *(0 + n) , (v))
#define ra(a) for(int &x : (a)) cin >> (x);
#define pa(a) for(int &x : (a)) cout << (x) << " ";cout << "\n"
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>
/*----------check constraints again-------------*/


int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  in(n);
  vi a(n);
  ra(a);
  
  int dp[n]={0};
  dp[0] = 1;
  int ans = INT_MIN;
  fri(i ,1, n){
    if(a[i] >= a[i-1]){
    dp[i] = max(dp[i-1] , 1+dp[i-1] );}
    else{
    	ans = max(ans , dp[i-1]);
    	dp[i] = 1;
    }
  }
  oup( max(dp[n-1] , ans));
  return 0;
}