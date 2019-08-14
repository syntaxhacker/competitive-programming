#include <bits/stdc++.h>
using namespace std;
int n,x[200],y[200],points,d,d1,d2,d3;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           if(i==j)
            continue;
           if(x[i]>x[j] && y[i]==y[j])
            d++;
           if(x[j]>x[i] && y[i]==y[j])
            d1++;
           if(y[i]>y[j] && x[i]==x[j])
            d2++;
           if(y[j]>y[i] && x[i]==x[j])
            d3++;
           if(d&&d1&&d2&&d3)
            break;
       }
       if(d&&d1&&d2&&d3)
        points++;
       d1=d2=d=d3=0;
    }
    cout<<points;

    return 0;
}