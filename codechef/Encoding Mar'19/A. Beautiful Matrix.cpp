#include <bits/stdc++.h>
using std::ifstream;
using std::pair;
#define fri(i,n) for( i = 0 ; i < n;++i) //inc from front
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
#define toup2(i,j) cout << "output - "<<  i << " " <<j << "\n"
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
unsigned gcd(unsigned a, unsigned b)
{
    if (b) return gcd(b, a % b);
    else return a;

}
int main() {
  // ifstream in("input.txt");
  int num ,i ,j;
  bool tmp = 0;
  fri(i,5){
    if(tmp){
      i--;
      tmp =0;
      break;
    }
   fri(j,5){
      inp(num);
     if(num == 1){
    tmp=1;
    break;}
  } 
  }
  if(tmp) { i--; } 

  int tmp1 = 0 , tmp2 = 0;
    tmp1 = std::abs(2-i);
    tmp2 = std::abs(j-2);
  oup((tmp1+tmp2));
return 0;
}
