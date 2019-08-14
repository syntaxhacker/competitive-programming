#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c , x1 , x2;
    cin >> a  >> b >> c;
    int ans = (b + c) - a;
	if(ans > 0) cout << ans; else cout << 0;
    return 0;
}
