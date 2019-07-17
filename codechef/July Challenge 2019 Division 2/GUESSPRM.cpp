#include<bits/stdc++.h>
#define int long long
#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define debug1(a) cout<<a<<endl;
#define debug2(a,b) cout<<a<<' '<<b<<endl;
#define debug3(a,b,c) cout<<a<' '<<b<<' '<<c<<endl;
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,a,b)for(int i=a;i<b;i++)
#define repre(i,a,b)for(int i=a;i<=b;i++)
#define pi pair<int,int>
#define pii pair<int,pi>
#define mp map<int,int>
#define ump unordered_map<int,int>
#define st set<int>
#define ust unordered_set<int>
#define mst multiset<int>
#define pq priority_queue
#define mpq priority_queue<int,vector<int>,grater<int> >
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sumofdigits(sum,num) int sum = 0; while (n != 0) { sum = sum + n % 10; n = n/10; }
#define int2str(str,n) n=boost::lexical_cast<int>(str);
#define float2str(str,n) n=boost::lexical_cast<float>(str);
using namespace __gnu_pbds;
using namespace std;

set<int> s1;
vector<int> squares;

void initialise()
{
    repr(i,2,100000)squares.push_back(i*i);
}

int findnext(set<int> &s)
{
    set<int> modvec;
    for(int i=0;i<squares.size();i++)
    {
       for(auto it=s.begin();it!=s.end();it++)
       {
           int f=*it;
           int z=squares[i]%f;
           //cout<<z<<endl;
           modvec.insert(z);
           if(modvec.size()==s.size())
           {
             return i;
           }
       }
       modvec.clear();
    }
}

void primeFactors(int n, set<int> &s)
{

    while (n%2 == 0)
    {
        s.insert(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            s.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
        s.insert(n);
}

int findans(int b, int m)
{
    for(auto it=s1.begin();it!=s1.end();it++)
    {
      //cout<<*it<<endl;
      int f=*it;
      //cout<<squares[b];
      if((squares[b]%f)==m)
      {
        return f;
      }
    }
}

int32_t main()
{
    fastio
    initialise();
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,m;
        cout<<"1"<<" "<<"100000"<<endl;
        cin>>n;
        primeFactors(10000000000-n,s1);
        int b=findnext(s1);
        cout<<"1"<<" "<<b+2<<endl;
        cin>>m;
        cout<<"2"<<" "<<findans(b,m)<<endl;
        string x;
        cin>>x;
        s1.clear();
        fflush(stdin);
        fflush(stdout);
    }
    return 0;
}
