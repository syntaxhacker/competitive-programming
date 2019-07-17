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
#define inp2(i,j) cin >> i >> j 
#define inp3(i,j,k) cin >> i >> j >> k
#define oup(i) cout << i << "\n"
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
using std::endl;
using std::cout;
using std::vector;
using std::string;
using std::sort;
using std::ios_base;

int main() 
{ 
	//ifstream in("input.txt");
	string s;
	int sum;
	inp(s);
	fri(i, s.length()){
		sum+=(s[i]-96);
	}
	oup(sum);
	return 0; 
} 