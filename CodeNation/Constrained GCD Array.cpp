#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int MOD = 1e9 + 7;
const int SZ = 20;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int getRand(int l, int r)
{
	uniform_int_distribution<int> uid(l, r);
	return uid(rng);
}
 
int pow(int a, int b, int m)
{
	int ans = 1;
	while(b > 0)
	{
		if(b % 2)
		{
			ans *= a;
			ans %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	}
	return ans;
}
 
int add(int a, int b)
{
	int res = a + b;
	if(res >= MOD)
		return res - MOD;
	return res;
}
 
int mult(int a, int b)
{
	long long res = a;
	res *= b;
	if(res >= MOD)
		return res % MOD;
	return res;
}
 
struct matrix
{
	int arr[SZ][SZ];
 
	void reset()
	{
		memset(arr, 0, sizeof(arr));
	}
 
	void makeiden()
	{
		reset();
		for(int i=0;i<SZ;i++)
		{
			arr[i][i] = 1;
		}
	}
 
	matrix operator + (const matrix &o) const 
	{
		matrix res;
		for(int i=0;i<SZ;i++)
		{
			for(int j=0;j<SZ;j++)
			{
				res.arr[i][j] = add(arr[i][j], o.arr[i][j]);
			}
		}
		return res;
	}
 
	matrix operator * (const matrix &o) const 
	{
		matrix res;
		for(int i=0;i<SZ;i++)
		{
			for(int j=0;j<SZ;j++)
			{
				res.arr[i][j] = 0;
				for(int k=0;k<SZ;k++)
				{
					res.arr[i][j] = add(res.arr[i][j] , mult(arr[i][k] , o.arr[k][j]));
				}
			}
		}
		return res;
	}
};
 
matrix power(matrix a, int b)
{
	matrix res;
	res.makeiden();
	while(b)
	{
		if(b & 1)
		{
			res = res * a;
		}
		a = a * a;
		b >>= 1;
	}
	return res;
}
 
int work(int n, int g)
{
	matrix mat;
	int temp = 0;
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			mat.arr[i][j] = (__gcd(i + 1, j + 1) == g);
			temp += mat.arr[i][j];
		}
	}
	matrix m = power(mat, n - 1);
	int sum = 0;
	for(int i = 0; i < 20; i++)
		for(int j = 0; j < 20; j++)
			sum += m.arr[i][j];
	sum %= MOD;
	return sum;
}
 
int32_t main()
{
	IOS;
	int n, m;
	cin >> n >> m;
	int others = n;
	int ans = 1;
	for(int i = 1; i <= m; i++)
	{
		int l, r, g;
		cin >> l >> r >> g;
		ans *= work(r - l + 1, g);
		ans %= MOD;
		others -= (r - l + 1);
	}
	ans *= pow(20LL, others, MOD);
	ans %= MOD;
	cout << ans;
	return 0;
}