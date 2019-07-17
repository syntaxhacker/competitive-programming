#include <iostream>
using std::cin;
using std::cout;
using std::ios_base;
int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
		long long n,k;
    cin >> n >> k;
    if( n==2 ) { cout << k*k;
    } else {  cout << k; }
    
    return 0;
}
