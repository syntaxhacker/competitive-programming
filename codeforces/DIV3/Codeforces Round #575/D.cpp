#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5, INF = 0x3f3f3f3f;

int sum[3][N];
char s[N], t[N] = "RGB";
 
int main() {
	int q ;cin >> q;
	while (q--) {
		int n , k , ans = INF;
    cin >> n >> k;
		scanf("%s", s + 1);
		for (int i = 0; i < 3; ++i)
			for (int j = 1; j <= n; ++j)
				sum[i][j] = sum[i][j - 1] + (s[j] != t[(i + j) % 3]);
		for (int i = 0; i < 3; ++i)
			for (int j = k; j <= n; ++j)
				ans = min(ans, sum[i][j] - sum[i][j - k]);
		  cout << ans  << '\n';
	} 
	return 0;
}