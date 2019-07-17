#include<bits/stdc++.h>
using namespace std;
int main()
{

// 1 0 0
// 0 0 0
// 0 0 1

	int a[5][5]={0},i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++) cin>>a[i][j];
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		cout<<((a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1])+1)%2;
		cout<<endl;
	}
}