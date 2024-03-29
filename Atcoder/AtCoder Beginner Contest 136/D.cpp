#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<cassert>
using namespace std;

//#define int long long
typedef long long ll;

typedef unsigned long long ul;
typedef unsigned int ui;
const ll mod = 1000000007;
const ll INF = mod * mod;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef pair<ll, ll> LP;
typedef vector<ll> vec;
typedef vector<string> svec;
typedef long double ld;
typedef pair<ld, ld> LDP;
const ld eps = 1e-8;


int ans[1 << 17];
void solve() {
	string s; cin >> s;
	int n = s.length();
	rep(i, n) {
		int le = i;
		while (i + 1 < n&&s[i] == s[i + 1]) {
			i++;
		}
		int len = i - le + 1;
		if (s[i] == 'L') {
			ans[le] += (len + 1) / 2;
			ans[le - 1] += len / 2;
		}
		else {
			ans[i] += (len + 1) / 2;
			ans[i + 1] += len / 2;
		}
	}
	rep(i, n) {
		if (i > 0)cout << " ";
		cout << ans[i];
	}
	cout << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}
