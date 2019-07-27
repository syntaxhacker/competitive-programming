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

template<typename... T>
void read(T&... args){
((cin >> args) , ...);
}
template<typename... T>
void oup(T&... args){
((cout << args <<"\n") , ...);
}
unsigned lcm(int a, int b) { return (a / __gcd(a, b) * b); }
#define fri(i, j , n) for (int i = j; i < n; ++i)
#define frie(i, j , n) for (int i = j; i <= n; ++i)
#define frb(i,j, n) for (int i = j; i >= n; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fa(x , n , v) fill(&(x)[0][0], &(x)[0][0] + (0 + n) *(0 + n) , (v))
#define ra(a) for(int &x : (a)) cin >> (x);
#define pa(a) for(int &x : (a)) cout << (x) << " ";cout << "\n"
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
  int t , n,k ,oc;
  read(t);
  while(t--){
    read(n,k);
    vi v(n);
    oc = 0;
    fri(i,0,n){
      cin >> v[i];
      if(v[i] & 1) oc++;
    }
    if(oc < k  || (oc % 2 != k % 2)) {oup("NO") ; continue;}
    oup("YES");
    fri(i,0,n){
      if(k == 1) break;
      if(v[i] & 1) {
        cout << i+1 << " ";
        k--;
      }
    }
    oup(n);
  }
  return 0;
}

