#include bitsstdc++.h
using namespace std;

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power  0) {

        if(power & 1) {
            result = base ;}
        base = base ;
        power = 1 ;
    }
    return result;
}

int main()
{
  ios_basesync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout  fast_power(20 , 20);
  return 0;
}