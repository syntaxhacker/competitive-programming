#include<bits/stdc++.h>
using namespace std;

int main(){
int num , tmp;
cin >> num;
while( num ){
    vector<int> order(num);
    for(int i =0 ;i<num;++i){
    cin >> order[i];
    }
stack<int> lane;
int need = 1;
bool state = true;
for (int i = 0; i < order.size(); i++) {
	while (!lane.empty() && lane.top() == need) {
		need++;
		lane.pop();
	}
	if (order[i] == need) {
		need++; 
	} else if (!lane.empty() && lane.top() < order[i]) {
		state = false;
		break;
	} else {
		lane.push(order[i]);
	    }
    }
if (state) cout << "yes" << "\n";
else cout << "no" << "\n";
cin >> num;
}
}
