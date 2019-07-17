//https://www.codechef.com/problems/CUTBOARD
#include <iostream>
using std::cin;
using std::cout;
int main() {
	
	int t;
	cin >> t;
	while(t--){
		int rows , columns;
		cin >> rows;
		cin >> columns;
		int numOfCuts = (rows-1)*(columns-1);
		cout << numOfCuts << ' ';
	}
	return 0;
}