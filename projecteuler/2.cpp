#include <iostream>
using namespace std;

int main()
{
    unsigned long long int a,b,c , totalsum;
    totalsum = 0;
    a = 1; // 1st index digit in fib series(according to question)
    b = 2; // 2nd index digit in fib series(according to question)
    totalsum+=2; // because 2 is an even-valued term in the series 
   while(totalsum < 4000000){ //loop until 4million
        c = a+b; // add previous two nums
        a = b;  
        b = c;  
       if(c&1) continue; // if its odd ignore and if its an even-valued term add 
       else totalsum+=c; 
    }
    cout << totalsum;
    return 0;
}

