//https://www.codechef.com/problems/LUCKFOUR
#include <iostream>
#include <algorithm>
using  std::cin;
using  std::string;
using  std::cout;

int main()
{
    unsigned int t;
    cin >> t;
    while(t--){
      string str;
      cin >> str;
      sort(str.begin() , str.end());
      unsigned int count = 0;
      for(int i=0;i<str.length();i++){
        int c = str[i];
        if(c > 52) break;
        if(c == 52){
          count++;
        }
        }
      
        cout << count << "\n";
    }
    return 0;
}
