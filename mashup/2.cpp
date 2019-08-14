#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n,m;
  cin >> n >> m;
  vi p(m);
  vi ans(n+1 , 0);
  for(int i = 1 ; i<=n ; ++i) {
  cin >> p[i];
    for(int  j = p[i] ; j<=n ; ++j ){
        if(ans[j] == 0) ans[j] = p[i];
    }
    }
for(int i = 1 ; i<=n ; ++i) {
  cout <<  ans[i] << " ";
}}