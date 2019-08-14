#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fri(i, j , n) for (int (i) = (j); (i) < (n); ++(i))
#define frie(i, j , n) for (int (i) = (j); (i) <= (n); ++(i))
#define frb(i,j, n) for (int (i) = (j); (i) >= (n); (i)--)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define rall(x) (x).rbegin(),(x).rend()
#define f2a(x , n , v)  fill(&(x)[0][0], &(x)[0][0] + (0 + n) *(0 + n) , (v))
#define fa(x , n , v) fill( (x), (x)+(n), (v)) 
#define ra(a) for(int &x : (a)) cin >> (x)
#define pa(a) for(int &x : (a)) cout << (x) << " ";cout << "\n"
#define pb emplace_back
#define mp make_pair
#define vi vector<int>
#define vlli vector<lli>

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  lli n,a,b , tmp1 = 0 ,tmp2 = 0;
  cin >> n >> a >> b;
  vlli tasks(n);
	fri(i,0,n) cin >> tasks[i];
	sort(all(tasks));
    lli cc = tasks[b-1];
    fri(i,0,n){
        
        if(tasks[i] <= cc){
            tmp1++;
        }
        else if(tasks[i] > cc ){
            tmp2++;
        }

    }
    if((tmp1 ==b) && (tmp2 ==a)){
        cout << (tasks[b] - tasks[b-1]); 
    }else cout << 0;
  return 0;
}