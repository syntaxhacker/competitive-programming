#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,a[3],c[3];
    cin>>t;
    
    while (t)
    {
        for (int i=0;i<3;i++)
            cin>>a[i];
        for (int i=0;i<3;i++)
            cin>>c[i];
        
        bool flag = true;    
        
        if (a[1]>a[0])
        {
            if (c[1]<=c[0])
            {    
                cout<<"NOT FAIR";
                flag=false;
            }
        }
        else if (a[1]<a[0])
        {
            if (c[1]>=c[0])
            {    
                cout<<"NOT FAIR";
                flag=false;
            }
        }
        else 
        {
             if (c[1]!=c[0])
             {    
                cout<<"NOT FAIR";
                flag=false;
             }
        }
        
        if (flag)
        {  
            if (a[2]>a[1])
            {
                if (c[2]<=c[1])
                {    
                    cout<<"NOT FAIR";
                    flag=false;
                }
            }
            else if (a[2]<a[1])
            {
                if (c[2]>=c[1])
                {    
                    cout<<"NOT FAIR";
                    flag=false;
                }
            }
            else 
            {
                 if (c[2]!=c[1])
                 {    
                    cout<<"NOT FAIR";
                    flag=false;
                }
            }
        }            
        
        if (flag)
        {
            if (a[2]>a[0])
            {
                if (c[2]<=c[0])
                {    
                    cout<<"NOT FAIR";
                    flag=false;
                }
            }
            else if (a[2]<a[0])
            {
                if (c[2]>=c[0])
                {    
                    cout<<"NOT FAIR";
                    flag=false;
                }
            }
            else 
            {
                 if (c[2]!=c[0])
                {    
                    cout<<"NOT FAIR";
                    flag=false;
                }
            }
        }
        
        if (flag)
            cout<<"FAIR";
        
        if (t!=1)
            cout<<endl;
        
        t--;
    }
    
	return 0;
}
