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
#define friie(i , j , n) for (int i = j; i <= n; ++i)
#define ra(a) for(int &x : (a)) cin >> (x);
typedef long long int lli;
typedef unsigned long long int ulli;
const lli MOD = 1e9 + 7;
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>

template <typename T> void mx(T& a, T b) {
    a = max(a, b);
}

bool wow(pair<int,int> p) {
    return p.first == 0 || p.second == 0;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a, b;
  cin >> a >> b;
  vector< vector<pair <int , pair <int , int>>>> dp(a.length() + 1 , 
    vector<pair <int , pair <int , int>>> (b.length()+1 , {INT_MIN,{0,0}}));
  dp[0][0]= {0,{0,0}};
  frii(i,0,a.length())
  frii(j,0,b.length()){
	  if(  a[i] == b[j]){
	    mx(dp[i+1][j+1] , make_pair(dp[i][j].first +1 , make_pair(i,j)));
	  }
	  mx(dp[i+1][j] , make_pair( dp[i][j].first , make_pair(i,j)));
	  mx(dp[i][j+1] , make_pair( dp[i][j].first , make_pair(i,j)));
  }
  pair <int , pair <int , int>> ans = {0,{0,0}};
  friie(i,0,a.length())
  friie(j,0,b.length())
  mx(ans , make_pair( dp[i][j].first , make_pair(i,j)) );
  string s;
  pair<int , int> curr = ans.second;
  while(!wow(curr)){
    int i = curr.first;
    int j = curr.second;
    pair<int , int> previous = dp[i][j].second;
    if(previous == make_pair(i-1,j-1) ) s+=a[i-1];
    curr = previous;
  }
  reverse(s.begin() , s.end());
  cout << s;
  return 0;
}