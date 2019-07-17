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
	ifstream in("input.txt");
	short int t;
	in >> t;
	while(t--){
		short int SH,SM,EH, EM,totalM,totalH;
		in >> SH >> SM >> EH >>  EM;
		totalM = (60-SM) + EM;
		// toup(totalM);
		if(totalM > 60) {
			totalM-=60;
			totalH = (EH-SH);
		}
		else if(totalM < 60){ totalH = (EH-SH)-1;}
		else if( totalM ==60 ) {totalH = EH-SH;totalM = 0;}
		oups(totalH);oups(totalM);
		cout << "\n";
	}

	return 0; 
} 
// 4 22 6 52