#include<stdio.h>
int a[1000005];
int b[100]={4,8,15,16,23,42};
int c[100]={0};
int main()
{
		int n,m;
		scanf("%d",&n);
		m=n;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==4)
			c[4]++;
			if(a[i]==8&&c[4]>c[8])
			c[8]++;
			if(a[i]==15&&c[8]>c[15])
			c[15]++;
			if(a[i]==16&&c[15]>c[16])
			c[16]++;
			if(a[i]==23&&c[16]>c[23])
			c[23]++;
			if(a[i]==42&&c[23]>c[42])
			c[42]++;
		}
		printf("%d\n",n-(c[42]*6));
	return 0;
}