#include<iostream>
using namespace std;

int main(){
  int t,n,i;
  cin>>t;

  while(t--){
    cin>>n;
    int a[n],f=1;

    cin>>a[0];
    if(a[0]!=1)
    f=0;
    
    for(i=1;i<n;++i){
      cin>>a[i];
      if(a[i]>7)
      f=0;

      if(a[i]!=a[i-1] && a[i]!=a[i-1]+1 && a[i]+1!=a[i-1])
      f=0;
    }
     
      if(a[n/2]==7){
        for(i=0;i<=n/2-1;++i)
        if(a[i]!=a[n-1-i])
        f=0;
      }
      else
      f=0;
  
    if(f==1)
    cout<<"yes\n";
    else
    cout<<"no\n";

  }
  return 0;
}
