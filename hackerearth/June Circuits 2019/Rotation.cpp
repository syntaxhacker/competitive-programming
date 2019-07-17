#include <bits/stdc++.h>
using std::__gcd;
using std::cerr;
using std::cin;
using std::cout;
using std::ios_base;
using std::map;
using std::max;
using std::min;
using std::sort;
using std::string;
using std::vector;

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
unsigned lcm(int a, int b) { return (a / __gcd(a, b) * b); }
#define fri(i, n) for (int i = 0; i < n; ++i)
#define jri(j, k, n) for (int j = k; j >= n; j--)
#define swapnumsxor \
  a ^= b;           \
  b ^= a;           \
  a ^= b
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define inp(i) cin >> i
#define inp2(i, j) cin >> i >> j
#define inp3(i, j, k) cin >> i >> j >> k
#define MOD 1000000007
#define rmdup                        \
  std::sort(str.begin(), str.end()); \
  str.erase(std::unique(str.begin(), str.end()), str.end());

typedef long long int lli;
typedef unsigned long long int ulli;
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>
#define vulli vector<ulli>
const int INF = 0x3f3f3f3f;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  inp(t);
  string a, b;
  cin >> a >> b;
  bool flag;
  int i, j = 0, c = 0;
  for (i = 0; i < t; ++i)
  {
    flag = false;
    if (b[j] == a[i])
    {
      i++;
      j++;
      while (b[j] == a[i] && i < t)
      {
        flag = true;
        j++;
        i++;
        c++;
        if (b[j] != a[i] && i < t)
        {
          j = 0;
          break;
        }
      }
    }
    
  }
  if (i == t+1 && flag && j == 0)
  {
    cout << t - c ;
  }
  else if (j)
  {
    cout << t - j ;
  }
  else
    cout << t ;
  return 0;
}
