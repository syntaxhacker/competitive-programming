#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	string str;
	stringstream ss;
	cin >> str;
	for(int i = 0; i < str.length(); ++i) {
		if(str.substr(i, 3) == "WUB") i += 2, ss << ' ';
		else ss << str[i];
	}
	while(ss >> str) cout << str << ' ';
	return 0;
}