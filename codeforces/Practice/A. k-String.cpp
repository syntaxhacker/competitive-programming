#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll INF = 1e18;
int MOD = 1e9 + 7;

int k;
string s;

int solve(){
	cin >> k >> s;
	int f[26] = {};
	for(char c: s) f[c-'a']++;
	string ans = "";
	for(int i=0;i<26;i++) if(f[i]){
		if(f[i] % k){
			cout << -1 << endl;
			return 0;
		}
		for(int x=0;x<f[i]/k;x++) ans += 'a' + i;
	}
	for(int i=0;i<k;i++) cout << ans;
	cout << endl;
	return 0;
}

int main(){
	ios::sync_with_stdio(0);
	solve();
	return 0;
}