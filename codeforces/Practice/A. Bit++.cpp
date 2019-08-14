#include <bits/stdc++.h>
using std::cout;
using std::cin;
int main() {
  int i = 0 ,t;
char c[4];
cin >> t ;
while(t--){
  cin >> c;
  if(c[0] == '+' || c[2] == '+' ) i++;
  else i--;
}
std::cout << i ;

}