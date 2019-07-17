#include <iostream>
#include <iomanip>
#define fr(i,n) for(int i = 0 ; i < n;i++)
using std::cin;
using std::cout;
int main()
{
    short int n;
    float poscount = 0 , negcount = 0, zerocount = 0;
    cin >> n;
    int a[n];
    fr(i,n){
        cin  >> a[i];
        if(a[i] > 0){ poscount++; }
        else if(a[i] == 0){ zerocount++; }
        else if(a[i] < 0) { negcount++; }
    }
        cout  << std::fixed << std::setprecision(6) << poscount/n << "\n" << negcount/n << "\n"<< zerocount/n << "\n";
    
    return 0;
}
