#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vint;
int a[100],b[100],maxi,ans;
int main(){
	ios_base::sync_with_stdio (0);cin.tie(0);
	int n,m;cin>>n;
	for(int i=1 ; i<=n ; i++)
		cin>>a[i];
	cin>>m;
	for(int i=1 ; i<=m ; i++)
		cin>>b[i];
	for(int i=1 ; i<=n ; i++)
		for(int j=1 ; j<=m ; j++)if(b[j]%a[i] == 0)
			maxi = max(maxi , b[j]/a[i]);
	for(int i=1 ; i<=n ; i++)
		for(int j=1 ; j<=m ; j++)if(b[j]%a[i] == 0)
			ans += (b[j]/a[i] == maxi);
	cout<<ans;
	return 0;
}