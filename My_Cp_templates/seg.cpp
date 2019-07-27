
#include<bits/stdc++.h> 
using namespace std;

vector<int> arr = {1,4,-2,3} ;
int len = arr.size() -1;
vector<int> seg(4*len); 

void build( int index , int lo , int hi ) {
    if(lo > hi) return;
    if( lo  == hi ) {
        seg[index] = arr[lo];
        return;
    }
    int mid = (lo + hi) >> 1;
    int l = index<<1;
    build(l, lo, mid);
    build(l+1, mid + 1, hi);
    seg[index] = std::min( seg[l] ,seg[l+1]);
}

int querymin( int index , int s, int e , int qs , int qe ){
    if( qs > e || qe < s ) return INT_MAX;
    if( s >= qs && e <=qe ){
      return seg[index];
    }
    int mid = (s + e) >> 1;
    int left = querymin( 2*index , s , mid , qs ,qe );
    int right = querymin( 2*index+1 ,mid +1 , e , qs ,qe);
    return min( left , right );
}

void updatenode(int index , int s, int e , int i , int val ){
   if( i < s || i > e ) return;
   if(s==e) {
   seg[index] = val;
   return ;}

  int mid = (s + e) >> 1;
  int l = index<<1;
  updatenode( l , s , mid , i ,val );
  updatenode( l+1 ,mid +1 , e , i ,val);
  seg[index] = min( seg[l] ,seg[l +1] );
  return;
}
void updaterange(int index , int s, int e , int rs ,int re,int c ){
   if( re < s || rs > e ) return;
   if(s==e) {
   seg[index] = c;
   return ;
    }
  int mid = (s + e) >> 1;
  int l = index<<1;
  updaterange( l , s , mid ,rs,re ,c );
  updaterange( l+1 ,mid +1 , e ,rs,re ,c);
  seg[index] = min( seg[l] ,seg[l +1] );
  return;
}

int main() {

    build(1,0,len);
    updaterange(1, 0, len ,2,3,-1); 
    for(auto i : seg){
      // if(i)
      cout << i << " ";
    }
  return 0;
}