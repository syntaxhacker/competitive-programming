//https://www.codechef.com/problems/ICL1902
#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
int main() {
	
	int t;
	cin >> t;
	while(t--){
		int num , count = 0;
		cin >> num; 
		while(num != 0 ){
		int root = sqrt(num);
		num -= (root*root);
		count++;
		}
		cout << count  << endl;
	}
	return 0;
}