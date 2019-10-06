#include <bits/stdc++.h> 
using namespace std; 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    int flag=0;
    if(s1=="paper"){
        if(s2=="rock" && s3=="rock"){
            cout << "F";
            flag=1;
        }
    }
    if(s1=="rock"){
        if(s2=="scissors" && s3=="scissors"){
            cout << "F";
            flag=1;
        }
    }
    if(s1=="scissors"){
        if(s2=="paper" && s3=="paper"){
            cout << "F";
            flag=1;
        }
    }
    if(s2=="paper"){
        if(s1=="rock" && s3=="rock"){
            cout << "M";
            flag=1;
        }
    }
    if(s2=="rock"){
        if(s1=="scissors" && s3=="scissors"){
            cout << "M";
            flag=1;
        }
    }
    if(s2=="scissors"){
        if(s1=="paper" && s3=="paper"){
            cout << "M";
            flag=1;
        }
    }
    if(s3=="paper"){
        if(s1=="rock" && s2=="rock"){
            cout << "S";
            flag=1;
        }
    }
    if(s3=="rock"){
        if(s1=="scissors" && s2=="scissors"){
            cout << "S";
            flag=1;
        }
    }
    if (s3=="scissors"){
        if(s1=="paper" && s2=="paper"){
            cout << "S";
            flag=1;
        }
    }
    if (flag==0){
        cout << "?";
    }
}