//https://www.codechef.com/COOK55/problems/TRISQ
#include <iostream>
using std::cin;

int main() {
    unsigned short int t ;
    cin >> t;
	while(t--){
	    unsigned short int base;
	    cin >> base;
	    base = base/2;
	    std::cout << ((base*base) - base) /2 << std::endl;
	}
	
	return 0;
}
