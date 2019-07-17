//https://www.codechef.com/problems/CHOPRT
#include <iostream>
using  std::cin;
using  std::cout;
using  std::endl;

int main() {
	// your code goes here
	unsigned short int t;
	cin >> t;
	while(t--){
	    unsigned int num1 , num2;
	    cin >> num1  >> num2;
	    if(num1 < num2){
	        cout << "<" << endl;
	    }
	    else if(num1 > num2){
	        cout << ">" << endl;
	    }
	    else if(num1 == num2){
	        cout << "=" << endl;
	    }
	}
	return 0;
}
