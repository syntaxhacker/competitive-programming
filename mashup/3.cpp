#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
/*------------------junk----------------------*/
#define TMP template<typename
TMP... T>
void oup(T&... args){
((cout << args <<"\n") , ...);
}
typedef long long int lli;
typedef unsigned long long int ulli;
const int MOD = 1e9 + 7;
#define F first
#define S second
#define gc getchar_unlocked
#define fri(i, j , n) for (int (i) = (j); (i) < (n); ++(i))
#define frie(i, j , n) for (int (i) = (j); (i) <= (n); ++(i))
#define frb(i,j, n) for (int (i) = (j); (i) >= (n); (i)--)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define rall(x) (x).rbegin(),(x).rend()
#define f2a(x , n , v)  fill(&(x)[0][0], &(x)[0][0] + (0 + n) *(0 + n) , (v))
#define fa(x , n , v) fill( (x), (x)+(n), (v)) 
#define ra(a) for(int &x : (a)) cin >> (x)
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
  string s;
  cin >> s;
  int n = s.length();
  if(n < 2) return 0;
  int dp[n + 1];
  dp[0] = 0;
  fri(i,1,n){
      if( islower(s[i]) && islower(s[i-1])){
          if(islower(s[i-2]) && i > 1 )
          dp[i] = max(dp[i-1] , 1+dp[i-1]);
          else {dp[i] = dp[i-1]; }
      }
      else if( isupper(s[i]) && isupper(s[i-1])){
          if(islower(s[i-2]) && i > 1 )
          dp[i] = max(dp[i-1] , 1+dp[i-1]);
          else {dp[i] = dp[i-1]; }
      }
      else if( islower(s[i]) && isupper(s[i-1])){
          if(isupper(s[i-2]) && i > 1 )
          dp[i] = max(dp[i-1] , 1+dp[i-1]);
          else {dp[i] = dp[i-1]; }
      }
      else if( isupper(s[i]) && islower(s[i-1])){
          if(islower(s[i-2]) && i > 1 )
          dp[i] = max(dp[i-1] , 2-dp[i-1]);
          else {dp[i] = dp[i-1]; }
      }
      else {dp[i] = dp[i-1]; }
  }

  cout << dp[n-1]+1;
  return 0;
}
// PRuvetSTAaYA
// PRuvEtSTAa