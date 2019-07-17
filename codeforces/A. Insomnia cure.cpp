#include <iostream>
using std::cin;
using std::cout;
using std::ios;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k, l, m, n, d,ans = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0) {
            ans++;
        } else if (i % l == 0) {
            ans++;
        } else if (i % m == 0) {
            ans++;
        } else if (i % n == 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}