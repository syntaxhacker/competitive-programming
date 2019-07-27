#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e5 + 5;
const int MOD = 1e9 + 7;
 
int n, m, x;
int cache[N][2];
vector<int> g[N];
 
int dp(int idx, int parity) 
{
	if(idx == x)
		return (parity == 1);
	int &ans = cache[idx][parity];
	if(ans != -1)
		return ans;
	ans = 0;
	for(auto &it:g[idx])
		ans += dp(it, parity ^ 1);
	ans %= MOD;
	return ans;
}
 
int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		memset(cache, -1, sizeof(cache));
		cin >> n >> m >> x;
		for(int i = 1; i <= n; i++)
			g[i].clear();
		for(int i = 1; i <= m; i++)
		{
			int u, v;
			cin >> u >> v;
			g[v].push_back(u); //Building reverse graph for easier answer computation
		}
		for(int i = 1; i <= n; i++)
			cout << dp(i, 0) << " ";
		cout << endl;
	}
	return 0;
}