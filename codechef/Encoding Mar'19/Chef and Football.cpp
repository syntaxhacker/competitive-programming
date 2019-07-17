#include <bits/stdc++.h>
using std::ifstream;
using std::pair;
#define fri(i,n) for(int i = 0 ; i < n;++i) //inc from front
#define jri(j,k,n) for(int j = k ; j >= n;j--) //dec frm last
// Need to add a check to make sure you are not swapping the same // variable with itself. Otherwise it will zero the value.
#define swapnumsxor a ^= b; b ^= a; a ^= b
#define inp(i) in >> i 
#define inp2(i,j) in >> i >> j 
#define inp3(i,j,k) in >> i >> j >> k
#define oup(i) cout << i << "\n"
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
using std::ios_base;
// unsigned gcd(unsigned a, unsigned b)
// {
//     if (b) return gcd(b, a % b);
//     else return a;

// }
int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ifstream in("input.txt");
		int t,temp;
		unsigned int n;
    inp(t);
    while(t--){
      inp(n);
      int a[n];
      fri(i,n){
        inp(a[i]);
      }
      fri(i,n){
        inp(temp);
        if(a[i]==0 && temp==0){cout<<"0"<<" ";}
        else if((temp < a[i]) or (temp == a[i])) cout << a[i]<< temp << " ";
        else cout << temp << a[i] << " ";
      }
      cout << "\n";
    }
    return 0;
}