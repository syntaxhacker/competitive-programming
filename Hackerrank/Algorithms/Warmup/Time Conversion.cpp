#include <bits/stdc++.h>
using std::ifstream;
using std::pair;
#define fri(i,n) for(int i = 0 ; i < n;++i) //inc from front
#define jri(j,k,n) for(int j = k ; j >= n;j--) //dec frm last
// Need to add a check to make sure you are not swapping the same // variable with itself. Otherwise it will zero the value.
#define swapnumsxor a ^= b; b ^= a; a ^= b
#define inp(i) cin >> i 
#define inp2(i,j) cin >> i >> j 
#define inp3(i,j,k) cin >> i >> j >> k
#define oup(i) cout << i << "\n"
#define oup2(i,j) cout << i << " "<<j<< "\n"
#define oup3(i,j,k) cout << i << " "<< j << " "<<k<< "\n"
#define oups(i) cout << i << " "
#define toup(i) cout << "output - "<<  i << "\n"
#define mod 1e9 + 7
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
using std::istringstream;
using std::ostringstream;
using std::ios_base;
unsigned gcd(unsigned a, unsigned b)
{
    if (b) return gcd(b, a % b);
    else return a;

}
int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
		// ifstream in("input.txt");
		string s;
    cin >> s;
    istringstream sa(s);
    int hr,min,ss;
    char c;
    sa >> hr >> c >> min >> c >> ss >>c;
    if( c == 'P'){
      if(hr < 12 && hr > 0) hr+=12;
    else{
      if(hr == 12) { hr=12;}
    }
    if(hr < 10) { cout << '0' << hr<< ":"; } else cout << hr << ":";
    if( min < 10) { cout << '0' << min<< ":"; } else cout << min<< ":"; 
    if( ss < 10) { cout << '0' << ss; } else cout << ss; 
    return 0;
    } else{
    if(hr == 12) cout << "00:";
    if(hr < 10) { cout << '0' << hr<< ":"; } else if(hr != 12) {cout << hr << ":";}
    if( min < 10) { cout << '0' << min<< ":"; } else cout << min<< ":"; 
    if( ss < 10) { cout << '0' << ss; } else cout << ss; 

      
      return 0;
    }
    return 0;
}
