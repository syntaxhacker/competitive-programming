#include<iostream>

int main()
{
    long long int t;
    std::cin >>t;
    (t&(t-1)) ? std::cout << "NIE" : std::cout << "TAK";
}
