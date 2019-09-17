#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
/*------------------junk----------------------*/
typedef long long int lli;
typedef unsigned long long int ulli;
const int MOD = 1e9 + 7;
#define ff first
#define ss second
#define gc getchar_unlocked
#define fri(i, j , n) for (auto (i) = (j); (i) < (n); ++(i))
#define frie(i, j , n) for (auto (i) = (j); (i) <= (n); ++(i))
#define frb(i,j, n) for (auto (i) = (j); (i) >= (n); (i)--)
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
#define getchar_unlocked getchar
# define TMP template<typename
#ifdef LOCAL
template < class c > struct rge { c b, e; };
template < class c > rge<c> range(c i, c j) { return rge<c>{i, j}; }
template < class c > auto dud(c* x) -> decltype(cerr << *x, 0);
template < class c > char dud(...);
struct debug {

    ~debug() { cerr << endl; }
    template < class c > typename enable_if<sizeof dud<c>(0) != 1, debug&>::type operator<<(c i) { cerr << boolalpha << i; return * this; }
    template < class c > typename enable_if<sizeof dud<c>(0) == 1, debug&>::type operator<<(c i) { return * this << range(begin(i), end(i)); }
    template < class c, class b > debug & operator <<(pair < b, c > d) {
        return * this << "(" << d.first << ", " << d.second << ")";
    }
    template < class c > debug & operator <<(rge<c> d) {
        *this << "[";
        for (auto it = d.b; it != d.e; ++it)
            *this << ", " + 2 * (it == d.b) << *it;
        return * this << "]";
    }};
#define oo(...) __f(#__VA_ARGS__, __VA_ARGS__)
TMP Arg1>
void __f(const char *name, Arg1 &&arg1)
{cerr << name << ": " << arg1 << "\n";}
TMP Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{const char *comma = strchr(names + 1, ',');cerr.write(names, comma - names) << ": " << arg1 << " |";__f(comma + 1, args...);
}
void in(int &x){
    cin  >> x;
}
#else
inline void uin(ulli &n){
    register ulli c=gc();
    n=0;
    while(c<'0'||c>'9')
    c=gc();
    while(c<='9'&&c>='0'){
    n=n*10+c-'0';
    c=gc();}
}
#endif
/*----------check constraints again-------------*/
ulli mem[65];
ulli pp[5] = {2,3,0,9};
ulli poww(ulli x , ulli y){
    ulli res = 1;
    while(y > 0){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    for(int i =0 ; i<=60 ;++i){
        mem[i] = poww(2 , i);
    }
  ulli t , n;
  uin(t);
  while(t--){
      uin(n);
        if(n == 1) {cout << "0\n";}
        else if(n < 4) {cout << "1\n";}
        else{
      for(int i = 2; i<= 60 ; ++i){
          if( mem[i]  > n ){
            cout << pp[ (abs(i-3)%4) ]  << "\n";break;
          }else if(mem[i] == n ){
            cout << pp[ (abs(i-2)%4) ]  << "\n";break;
          }
      }}
  }
}