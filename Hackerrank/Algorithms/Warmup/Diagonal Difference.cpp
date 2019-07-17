#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
int main()
{   
    int t , sum = 0 , sum2 = 0;
    cin >> t;
    int a[t*t];
    for(int i = 0 ; i < t*t ; i++ ){
        int n;
        cin >> n;
        a[i]  = n;
    }
    for(int i = 0 ; i < t*t ; i +=(t+1) ){
      sum += a[i];
    }

    for(int i = t-1 ; i < (t*t)-1 ; i += t-1 ){
      sum2 += a[i];
    }
      cout << abs(sum-sum2) << "\n";      
    return 0;
}
