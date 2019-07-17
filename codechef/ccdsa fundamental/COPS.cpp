#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t,x,y,m,i,l,r,j;
    cin>>t;
    while(t--){
    	cin>>m>>x>>y;
    	int c=0;
    	bool a[101]={0};
    	x=x*y;
    	for(i=0;i<m;i++){
    		cin>>y;
    		l=1>y-x?1:y-x;
    		r=100<y+x?100:y+x;
    		for(j=l;j<=r;j++)a[j]=1;
		}
		for(j=1;j<=100;j++)if(!a[j])c++;
		cout<<c<<"\n";
	}
	return 0;
}