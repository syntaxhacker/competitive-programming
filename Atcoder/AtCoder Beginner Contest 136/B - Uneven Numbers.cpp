#include <bits/stdc++.h>
using namespace std;
 
/* see https://github.com/pllk/cphb/
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
    tree_order_statistics_node_update> indexed_set;
 **/
 
typedef long long ll;
#define endl "\n"
#define fori(n) for(ll i=0; i<(n); i++)
 
#define cins(s) string s; cin>>s;
#define cini(i) int i; cin>>i;
#define cinll(l) ll l; cin>>l;
#define cinai(a, n) vi a(n); fori(n) { cin>>a[i]; }
#define cinall(a, n) vll a(n); fori(n) { cin>>a[i]; }
 
//typedef __int128 lll;
typedef pair<int, int> pii;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<string> vs;
typedef vector<ll> vll;
 
int main() {
cin.tie(nullptr);
std::ios::sync_with_stdio(false);
    cini(n);
    int ans=0;
    if(n>=100000)
        n=99999;
    if(n>=9999)
        ans+=(n-9999);
    n=min(n, 999);
    if(n>99)
        ans+=(n-99);
    n=min(n, 9);
    ans+=n;
    cout<<ans<<endl;
}