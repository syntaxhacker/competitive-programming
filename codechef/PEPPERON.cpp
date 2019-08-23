#include <bits/stdc++.h>
using namespace std;
const int max_n = 1100;
int a[max_n];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int sum = 0,n;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			a[i] = 0;
			string str;
			cin >> str;
			for(int j=0;j<n;j++)
			{
				if(str[j] == '0') continue;
				if((j)/(n>>1)){
					a[i]--;}
				else a[i]++;
			}
			sum+=a[i];
		}
		
		int ans = abs(sum);
		for(int i=0;i<n;i++)
		{
			ans = min(ans , abs(sum - (a[i] << 1)));
		}
		cout << ans << endl;
	}


	return 0;
}