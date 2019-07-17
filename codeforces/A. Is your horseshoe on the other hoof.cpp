#include <iostream>
#include <set>
using std::set;
int main() {
    int t = 4 , num;
    std::set<int> s;
	while(t--){
	    std::cin >> num;
	    s.insert(num);
	}
	std::cout << 4-s.size() << "\n";
	return 0;
}