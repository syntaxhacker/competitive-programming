#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
/*------------------junk----------------------*/
#define TMP template<typename
TMP Arg1>
void oup(Arg1 arg1){
(cout << arg1 <<"\n");
}
TMP... T>
void oup(T&... args){
((cout << args <<"\n") , ...);
}

typedef long long int lli;
typedef unsigned long long int ulli;
const int MOD = 1e9 + 7;
#define F first
#define S second
#define gc getchar_unlocked
#define fri(i, j , n) for (auto (i) = (j); (i) < (n); ++(i))
#define frie(i, j , n) for (auto (i) = (j); (i) <= (n); ++(i))
#define frb(i,j, n) for (auto (i) = (j); (i) >= (n); (i)--)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define rall(x) (x).rbegin(),(x).rend()
#define f2a(x , n , v)  fill(&(x)[0][0], &(x)[0][0] + (0 + n) *(0 + n) , (v))
#define fa(x , n , v) fill( (x), (x)+(n), (v)) 
#define ra(a) for(int &x : (a)) in(x)
#define pa(a) for(int &x : (a)) cout << (x) << " ";cout << "\n"
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>

TMP... T>
void in(T&... args){
((cin >> args) , ...);
}
int dp[100009];
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    dp[0] = 1;
    for(int i =1 ; i<100006 ; ++i){

        dp[i] = (dp[i-1] * 5) << 1;
        if(i >= 10) dp[i]%=MOD;
    }
    ulli pos , sum , totalsum , n , nl, l,nr,r , tmp , strlen;
	string str;
    bool match;
    int t;
    in(t);
    while(t--){
    in(nl, l,nr,r);
    totalsum = 0;
    frie(j , l, r){
    str = to_string(j);
    strlen = str.length();
     match = 0;sum = 0 ;
        fri(i , 0 , strlen){
            tmp = 1;
            if(str[i] == str[i+1]){
                if(!match){
            	pos = (strlen - i-1);
            	match = 1;}
            }
            else{
            if(match){
                n = str[i-1] - '0';
                sum += (n*(ulli)dp[pos]);
                match = 0;
            }
            else{
            	n = str[i] - '0';
            	pos = (strlen - i-1);
                sum += (n*(ulli)dp[pos]);
                }
            }
        }
    totalsum+=sum;
    totalsum%=MOD;
    }
        oup(totalsum);
        }
}
