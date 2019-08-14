#include <bits/stdc++.h>

using namespace std;

int main() {
  //ifstream in("in.txt");
	
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	a.resize(unique(a.begin(), a.end()) - a.begin());
	if (a.size() > 3) {
		cout << -1 ;
	} else {
		if (a.size() == 1) {
			cout << 0 ;
		} else if (a.size() == 2) {
			if ((a[1] - a[0]) % 2 == 0) {
				cout << (a[1] - a[0]) / 2 ;
			} else {
				cout << a[1] - a[0] ;
			}
		} 
    else {
			if (a[1] - a[0] != a[2] - a[1]) {
				cout << -1 ;
			} else {
				cout << a[1] - a[0] ;
			}
		}
	}
	
	return 0;
}