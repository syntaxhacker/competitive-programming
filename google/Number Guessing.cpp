#include <bits/stdc++.h>
using namespace std;

// #define oo(...) __f(#__VA_ARGS__, __VA_ARGS__)
// template <typename Arg1>
// void __f(const char *name, Arg1 &&arg1)
// {
//   cout << name << ": " << arg1 << "\n";
// }
// template <typename Arg1, typename... Args>
// void __f(const char *names, Arg1 &&arg1, Args &&... args)
// {
//   const char *comma = strchr(names + 1, ',');
//   cout.write(names, comma - names) << ": " << arg1 << " |";
//   __f(comma + 1, args...);
// }

// template<typename... T>
// void read(T&... args){
// ((cin >> args) , ...);
// }
// template<typename... T>
// void oup(T&... args){
// ((cout << args << endl) , ...);
// }
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
  int t ,a,b , n , ans;
  string s;
  cin >> t;
  while(t--){
    cin >> a >> b >> n;
    while(1){
    ans = ((a+b) >> 1);
    cout << ans << endl;
    cin >> s;
    // if(s == "WRONG_ANSWER") return 0;
    if(s == "CORRECT"){
        break;
    }
    else if(s == "TOO_BIG"){
    	b = ans-1;
        continue;
    }
    else if(s == "TOO_SMALL"){
        a = ans+1;
        continue;
    }
    }
  }
  return 0;
}

