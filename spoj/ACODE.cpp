#include <bits/stdc++.h>
const long long inf = 1e17;
#define forn(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
// ll mod=pow(10,9)+7;
ll a[5020];
int main() {
  ifstream in ("input.txt");
  int t;
  ll n, i;
  string s;
  cin >> s;
  while (s[0] != '0') {
    memset(a, 0, sizeof(a));
    a[0] = 1;
    a[1] = 1;
    ll d = (s[0] - '0') * 10 + (s[1] - '0');
    if (d >= 10 && d <= 26)
      a[1] = 2;
    for (i = 2; i < s.length(); i++) {
      d = (s[i - 1] - '0') * 10 + (s[i] - '0');
      if (d >= 10 && d <= 26)
        a[i] = a[i - 1] + a[i - 2];
      else
        a[i] = a[i - 1];
    }
    printf("%lld\n", a[i - 1]);
    cin >> s;
  }
  return 0;
}