#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#define il inline
#define vd void
#define rg register
#define rep(i,x,y) for(rg int i=x;i<=y;++i)
#define drp(i,x,y) for(rg int i=x;i>=y;--i)
using namespace std;
const int Len=2333333;
char buf[Len],*p1=buf,*p2=buf,duf[Len],*q1=duf;
il char gc(); il int rd(); il vd pc(char c); il vd rt(int x); il vd flush();
int n,t,ans[100005];
char s[100005];
int main(){
    scanf("%s",s+1),n=strlen(s+1);
    rep(i,1,n){
        if(s[i]=='R') t=i;
        else{
            if((i-t)&1) ++ans[t+1];
            else ++ans[t];
        }
    }
    drp(i,n,1){
        if(s[i]=='L') t=i;
        else{
            if((t-i)&1) ++ans[t-1];
            else ++ans[t];
        }
    }
    rep(i,1,n) rt(ans[i]),pc(' ');
    return flush(),0;
}
// RRLRL

il char gc(){return p1==p2&&(p2=(p1=buf)+fread(buf,1,Len,stdin),p1==p2)?-1:*p1++;}
il int rd(){char c;
    while(!isdigit(c=gc())&&c!='-');
    int f=c=='-'?c=gc(),1:0,x=c^48;
    while(isdigit(c=gc())) x=((x+(x<<2))<<1)+(c^48);
    return f?-x:x;
}
il vd pc(char c){q1==duf+Len&&fwrite(q1=duf,1,Len,stdout),*q1++=c;}
il vd rt(int x){x<0?pc('-'),x=-x:0,pc((x>=10?rt(x/10),x%10:x)+48);}
il vd flush(){fwrite(duf,1,q1-duf,stdout);}
