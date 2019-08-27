#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int ans[200000];
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  if(!(n&1)){
    cout << "NO\n";
  }
  else{
    cout << "YES\n";
     for (int i = 1; i <= n; i++)
    {  
      cout << i*2  - i%2 << " ";
    }
    for (int i = 1; i <= n; i++)
    {  
      cout << i*2 + i%2 -1 << " ";
    }
    
  }
}
