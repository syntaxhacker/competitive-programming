#include <vector>
#include <iostream>
// using namespace std;
using std::cin;
using std::cout;
using std::vector;

int main() {
    unsigned short int a[3] , b[3] , alice[0] , bob[0];
    cin >> a[0] >> a[1] >> a[2] ;
    cin >> b[0] >> b[1] >> b[2] ;
    for(unsigned short int i = 0 ; i< 3 ; i++){
        if( a[i] > b[i] ){
              alice[0] += 1;  
        }
        else if( a[i] < b[i] ){
            bob[0] +=1;
        }
    }
        cout << alice[0] << " " << bob[0];

    return 0;
}
