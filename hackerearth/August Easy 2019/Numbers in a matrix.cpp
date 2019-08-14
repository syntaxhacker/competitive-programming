#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, q;
    cin >> n >> m >> q;
    bool flip = false;
    set<pair<int, int>> s;
    for (int i = 0; i < q; ++i) {
        int k;
        cin >> k;
        if (k == 1) {
            int x, y;
            cin >> x >> y;
            if (s.find({x, y}) == s.end()) {
                s.insert({x, y});
            } else {
                s.erase({x, y});    
            }
        } else {
            flip = !flip;
        }
    }
    
    
    cout << (!flip ? (long long)s.size() : (long long)n * m - (long long)s.size()) << '\n';
    
}