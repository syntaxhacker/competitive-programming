#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  int p;
  int c;
  int x, y, k, n;
  bool f;
  while (t--) {
    cin >> x >> y >> k >> n;
    f = false;
    for(int i=0;i< n;i++) {
      cin >> p >>  c;
      if ((p >= x - y) && (c <= k)) {
        f = 1;
      }
    }
    if (f) {
      cout << "LuckyChef\n";
    } else cout << "UnluckyChef\n";
  }
  return 0;
}