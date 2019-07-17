#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <fstream>
using std::ifstream;
#define fri(i,n) for(int i = 0 ; i < n;++i) //inc from front
#define jri(j,k,n) for(int j = k ; j >= n;j--) //dec frm last
#define inp(i) cin >> i 
#define inp2(i,j) in >> i >> j 
#define inp3(i,j,k) in >> i >> j >> k
#define oup(i) cout << i << "\n"
#define oup3(i,j,k) cout << i << " "<< j << " "<<k<< "\n"
#define oups(i) cout << i << " "
#define toup(i) cout << "output - "<<  i << "\n"
#define mod 1000000007
#define rmdup std::sort(str.begin(), str.end());str.erase(std::unique(str.begin(), str.end()), str.end());
typedef long long int lli;
// typedef pair<int,int> pii;
// typedef vector<int> vec;
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define MAXN 1000000
using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::sort;
using std::ios_base;

int main()
{
	// ifstream in("input.txt");
unsigned long int n,sum1=0,sum2=0,sum3=0;
inp(n);
unsigned long int p[n];
for(unsigned long int i=1;i<=n;i++)
{
inp(p[i]);
if(i%3==1) sum1+=p[i];
else if(i%3==2) sum2+=p[i];
else if(i%3==0) sum3+=p[i];
}
cout<<sum1<<" "<<sum2<<" "<<sum3;
return 0;
}