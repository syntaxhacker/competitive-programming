//https://www.codechef.com/ALKH2019/problems/DANOW/
#include <iostream>
using std::cin;
using std::cout;
int main()
{ 
    unsigned short int n,q;
    cin >> n >> q;
    unsigned long int a[n],b[n];
    for(short int i = 0; i < n ; i++ ){
      cin >> a[i]; 
    }
    for(short int i = 0; i < n ; i++ ){
      cin >> b[i]; 
    }
    while(q--){
      unsigned short int l , h;
      cin >> l >> h;
      unsigned long long int strengthgained = 0;
      for(unsigned int i = l-1; i < h ; i++ ){
      strengthgained += a[i] * b[i] ; 
      }
      cout << strengthgained << "\n";
    }

    return 0;
}
