#include<iostream>
int n,k,l,c,d,p,nl,np;
int main()
{
std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
std::cout<<std::min(std::min(k*l/nl,p/np),c*d)/n;
}