#include<bits/stdc++.h>
using namespace std;
#define inp(i)cin>>i
int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);int a[200],t,num,rem,tmp,index,carry,x,i,digits;inp(t);while(t--){inp(num);i=0,digits=0;tmp=num;while(tmp!=0){rem=tmp%10;a[i]=rem;tmp/=10;i++;digits++;}
for(i=2;i<num;++i){carry=0;for(index=0;index<digits;++index){x=a[index]*i+carry;a[index]=x%10;carry=x/10;}
while(carry){a[index]=carry%10;carry/=10;index++;digits++;}};digits-=1;for(int j=digits;j>=0;j--){cout<<a[j];}
cout<<"\n";}}