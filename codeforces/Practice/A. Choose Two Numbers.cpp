#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
/*------------------junk----------------------*/
#define TMP template<typename
// #define DEBUG
#ifdef DEBUG
#define oo(...) __f(#__VA_ARGS__, __VA_ARGS__)
TMP Arg1>
void __f(const char *name, Arg1 &&arg1)
{cout << name << ": " << arg1 << "\n";}
TMP Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{const char *comma = strchr(names + 1, ',');cout.write(names, comma - names) << ": " << arg1 << " |";__f(comma + 1, args...);
}
#endif
TMP Arg1>
void oup(Arg1 arg1){
(cout << arg1 <<"\n");
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
#define gc getchar_unlocked
#define fri(i, j , n) for (auto (i) = (j); (i) < (n); ++(i))
#define frie(i, j , n) for (auto (i) = (j); (i) <= (n); ++(i))
#define frb(i,j, n) for (auto (i) = (j); (i) >= (n); (i)--)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define rall(x) (x).rbegin(),(x).rend()
#define f2a(x , n , v)  fill(&(x)[0][0], &(x)[0][0] + (0 + n) *(0 + n) , (v))
#define fa(x , n , v) fill( (x), (x)+(n), (v)) 
#define ra(a) for(int &x : (a)) in(x)
#define pa(a) for(int &x : (a)) cout << (x) << " ";cout << "\n"
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>

/*----------fast input-------------*/
// #define ff
#ifdef ff
TMP T>
inline void in(T &x)
    {
    register T c = getchar_unlocked();
    x = 0;
    T neg = 0;
    for(;((c<48 || c>57) && c != '-');c = getchar_unlocked());
    if(c=='-') {neg=1;c=getchar_unlocked();}
    for(;c>47 && c<58;c = getchar_unlocked()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
    }

#else
TMP... T>
void in(T&... args){
((cin >> args) , ...);
}
#endif
/*----------check constraints again-------------*/

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n ,tmp , maxa , maxb;
  in(n);
  maxa = INT_MIN;
  maxb = INT_MIN;
   while(n--){
    in(tmp);
    maxa = max(maxa , tmp);
  }
  int m;
  in(m);
 while(m--){
    in(tmp);
    maxb = max(maxb , tmp);
  }
  cout << maxa << " " << maxb;

}