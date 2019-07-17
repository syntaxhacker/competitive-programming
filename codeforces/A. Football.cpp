#include <bits/stdc++.h>
using namespace std;
map < string , int > teams;
int n , res;
string curr , ans;
int main(){
  cin >> n;
  while( n-- ){
    cin >> curr;
    teams[curr]++;
    if( teams[curr] > res ){
      res = teams[curr];
      ans = curr;
    }
  }
  cout << ans;
  return 0;
}