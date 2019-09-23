#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		deque<ll> C(n);
		for (int i = 0; i < n; i++)
			cin >> C[i];
		int X;
		cin >> X;
		int k1 = 0;
		int k2 = 0;
		ll t1 = 0;
		ll t2 = 0;
		while (!C.empty())
		{
			if (C.size() > 1)
			{
				if (t1 <= t2)
				{
					t1 += C[0];
					k1++;
					C.erase(C.begin());
				}
				else
				{
					t2 += X * C.back();
					k2++;
					C.erase(--C.end());
				}
			}
			else
			{
				if (t1 != t2)
				{
					if (t1 < t2)
					{
						k1++;
					}
					else
						k2++;
					break;
				}
				else
				{
					if (k1 >= k2)
						k1++;
					else
						k2++;
					break;
				}
			}
		}
		cout << k1 << " " << k2 << "\n";
	}
}