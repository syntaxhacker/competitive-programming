#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 2e6 + 5;
 
int sum[N];
 
int32_t main()
{
	IOS;
	for(int i = 1; i < N; i++)
		for(int j = 1; i * j < N; j++)
			sum[i * j] += i;
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	vector<int> v;
	for(int i = l2; i <= r2; i++)
		v.push_back(sum[i]);
	sort(v.begin(), v.end());
	int winA = 0, winB = 0;
	for(int i = l1; i <= r1; i++)
	{
		auto it = lower_bound(v.begin(), v.end(), sum[i]);
		if(it != v.begin())
			winA += (it - v.begin());
		winB += (v.end() - upper_bound(v.begin(), v.end(), sum[i]));
	}
	if(winA > winB)
		cout << "A";
	else if(winA == winB)
		cout << "Draw";
	else
		cout << "B";
	return 0;
}