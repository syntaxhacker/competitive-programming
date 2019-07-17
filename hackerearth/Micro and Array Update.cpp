#include <iostream>
#include <string>
#include <cctype>
#include <iterator>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>
using std::ifstream;
using std::pair;
#define fri(i,n) for(int i = 0 ; i < n;++i) //inc from front
#define jri(j,k,n) for(int j = k ; j >= n;j--) //dec frm last
#define inp(i) in >> i 
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
using std::map;
using std::sort;
using std::ios_base;

int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ifstream in("input.txt");
  int t;
	inp(t);
	while(t--){
		int n,k;
		inp2(n, k);
		int a[n-1];
		fri(i, n){
			int input;
			inp(input);
			a[i] = input;
		}
		sort(a,a+n-1);
		if( a[0] < k ){
			a[0]=k-a[0];
			oup(a[0]);
		}else{ oup(0); }
	}
return 0;
}
// 1
// 9 993397
// 959973 546219 904051 715665 293663 402511 790865 476941 655453