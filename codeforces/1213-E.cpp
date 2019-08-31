#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string s, t;
	cin >> n >> s >> t;
	string abc = "abc" , cur , temp;
	do {
		 cur = temp = "";
		for (int i = 0; i < n; ++i) cur += abc;
		if (cur.find(s) == string::npos && cur.find(t) == string::npos){
			cout << "YES" << endl << cur << endl;
			return 0;
		}
		temp = string(n, abc[0]) + string(n, abc[1]) + string(n, abc[2]);
		if (temp.find(s) == string::npos && temp.find(t) == string::npos){
			cout << "YES" << endl << temp << endl;
			return 0;
		}
		
	} while (next_permutation(abc.begin(), abc.end()));
}