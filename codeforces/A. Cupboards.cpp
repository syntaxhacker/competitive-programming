#include<iostream>
using namespace std;
int main(){
int n,a=0,b=0,c,d;
cin>>n;
for(int i=0;i<n;i++){
cin>>c>>d;a+=c;b+=d;}
cout<<min(a,n-a)+ min(b,n-b);
return 0;
}