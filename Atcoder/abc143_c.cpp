#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    stack<char> stk;
    int n;string s;
    cin >> n >> s;
    for(char & c : s){
        if(stk.empty()){
            stk.push(c);
        }else{
            if(stk.top() == c){
                continue;
            }else{
                stk.push(c);
            }
        }
    }
    cout << stk.size();
}









