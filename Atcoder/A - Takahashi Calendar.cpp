#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
/*------------------junk----------------------*/
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

#define TMP template<typename
TMP Arg1>
void oup(Arg1 arg1){
(cout << arg1 <<"\n");
}
TMP... T>
void oup(T&... args){
((cout << args <<" ") , ...);
cout <<  endl;
}
/*----------fast input-------------*/
//#define ff
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
{cout << name << ": " << arg1 << "\n";}
TMP Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{const char *comma = strchr(names + 1, ',');cout.write(names, comma - names) << ": " << arg1 << " |";__f(comma + 1, args...);
}
#endif
/*----------check constraints again-------------*/

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int d , m , tmp , num, c,ones , tens;
  in(m,d);
  int tot = 0;
  frie(k , 1, m){
  frie(i , 10 , d){
  if(i <=99){
      num = i;
      c = ones = tens= 0;
      while(num > 0){

          tmp =num%10;
          num/=10;
          c++;
          if(c == 1){
              if(tmp >=2) ones = tmp;
              else break;
          }
          else if(c == 2){
              if(tmp >=2) tens = tmp;
              else continue;
          }else break;
      }
      if(c > 2 || c < 2){
          continue;
      }else if(c == 2){
          if((ones * tens) == k){
              tot++;
          }
      }
      
  }else{
      break;
  }
  }
  }
cout << tot;
}