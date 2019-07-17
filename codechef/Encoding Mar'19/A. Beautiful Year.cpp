#include<iostream>
using std::cin;
using std::cout;
int main(){
int q,w,e,r,a;
cin>>a;
do{ 
a++;
q=a%10;
w=a%100/10;
e=a%1000/100;
r=a/1000;
if (q!=w&&q!=e&&q!=r&&w!=e&&w!=r&&e!=r) {cout<<a; break;}}
while(1);
}