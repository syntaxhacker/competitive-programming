//method 1 using set
#include <bits/stdc++.h>
using namespace std;
#define fri(i, n) for (int i = 0; i < n; ++i)
typedef long long int lli;
typedef unsigned long long int ulli;
#define inp(i) cin >> i
#define inp2(i, j) cin >> i >> j
#define inp3(i, j, k) cin >> i >> j >> k
#define oup(i) cout << i << "\n"
#define oup2(i, j) cout << i << " " << j << "\n"
#define oup3(i, j, k) cout << i << " " << j << " " << k << "\n"
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>
#define vulli vector<ulli>

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, q, x;
  inp(t);
  while (t--)
  {
    set<int> s;
    int ec , oc , c ;
    inp(q);
    while (q--){
      inp(x);
      //find duplicate if yes print current even and odd count 
      auto it = s.find(x);
      if(it != s.end() ) {
        oup2(ec , oc);
        continue;}
      else {
      ec = oc =  c = 0;
          vlli v;
          //push xor of both
          for(auto e : s){
              v.pb(e^x);
          }
          //push the xors values in vector into set
          for(auto i : v){
              s.insert(i);
          }
        
          s.insert(x);
          for (auto e : s)
            {
            c =__builtin_popcount(e) ;
            if(c&1) ++oc ; 
            else ++ec;
            }
            
        oup2(ec , oc);
      }
    }
  }
  return 0;
}

// method 2 using vectors

#include <bits/stdc++.h>
using namespace std;

#define fri(i, n) for (lli i = 0; i < n; ++i)
typedef long long int lli;
typedef unsigned long long int ulli;
#define inp(i) cin >> i
#define inp2(i, j) cin >> i >> j
#define inp3(i, j, k) cin >> i >> j >> k
#define oup(i) cout << i << "\n"
#define oup2(i, j) cout <<  i << " " << j<< "\n"
#define oup3(i, j, k) cout << i << " "<< j << " "<< k<< "\n"
#define pb emplace_back
#define vi vector<int>
#define vlli vector<lli>
#define vulli vector<ulli>


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  lli t, q, x;
  inp(t);
  while(t--){
    map<lli , pair<lli,lli> > a;
    vector<bool> v(1000001 , 0);
    lli ec , oc , c ;
    inp(q);
    while (q--){
      inp(x);
        
      if(v[x]) {
        oup2(ec , oc);
        continue;}
      else {
        ec = oc = c = 0;
      fri(i,1000001){
        if(v[i]){
          v[i^x] = 1;
        }
      }
      v[x] = 1;
      fri(i,1000001){
        if(v[i]){
          c =__builtin_popcount(i);
          if(c&1) ++oc ; 
          else ++ec;
        }
        
      }
        a[x].first = ec;a[x].second = oc;
        oup2(ec , oc);
      }
    }
  }
  return 0;
}