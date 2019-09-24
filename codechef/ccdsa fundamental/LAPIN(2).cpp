#include<bits/stdc++.h>
using namespace std;
int main(){
    int t , len , l;
    string s;
    cin >>t;
    while(t--){
        cin >>s;
        len = s.length();
        l = (len/2);
        if(len&1){
            sort( s.begin() , s.begin()+l );
            sort( s.begin()+l+1 , s.end() );
            if (s.substr(0 , (len/2)) == s.substr((len/2)+1 , len)) {
                cout << "YES\n";
            }
            else 
                cout << "NO\n";

        }else{
            sort( s.begin() , s.begin()+l );
            sort( s.begin()+l , s.end() );
            if (s.substr(0 , (len/2)) == s.substr((len/2) , len)) {
                cout << "YES\n";
            }
            else 
                cout << "NO\n";

        }
    }
}