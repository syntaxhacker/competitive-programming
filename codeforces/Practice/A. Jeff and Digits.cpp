 #include <iostream>
using namespace std;
int n,f,z,k;
main() {
     cin>>n;
     while(n--)cin>>k,k==5?f++:z++;f=f/9*9;
     if(f==0||z<1){cout<<(z<1?"-1":"0");return 0;}
     while(f--)cout<<'5';
     while(z--)cout<<'0';
}