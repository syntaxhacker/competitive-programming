#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
using std::cin;
using std::string;
using std::cout;
int main() {
  short int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    short int l = s.length();
    if(l > 10){
    cout << s[0];
    cout << l-2;
    cout << s[l-1];
    cout << "\n";
  }else { cout << s << "\n"; }}
}