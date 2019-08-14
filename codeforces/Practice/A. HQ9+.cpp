#include <iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int f=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='H' || s[i]=='Q' || s[i] =='9') { f=1;break; }
        }
        if(f==1) cout<<"YES";
            else cout<<"NO";
    }

}