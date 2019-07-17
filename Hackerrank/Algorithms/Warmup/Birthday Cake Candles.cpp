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
#define toup(i) cout << "output - "<<  i << "\n"
#define mod 1000000007

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

void fast(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
}
int main()
{
		fast();
		// ifstream in("input.txt");
    int t , i;
    vector<int> v;
    inp(t);
    while(t--){
      inp(i);  
      v.pb(i); 
    }
    sort(v.begin() , v.end());
    int s = v.size();
    int count = 0;
    jri(j, s-1, 0){
      count++ ;
    if( v[j-1] != v[j]) break;
    }
    oup(count);
    return 0;
}
