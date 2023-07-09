#include <iostream>
 
using namespace std;
 
int main()
{
   int  k,n,w,result=0,m ;
  cin>>k>>n>>w;
  m=k;
  for(int i=0;i<w;i++){
      k*=(i+1);
   if(n>=k){
      n=n-k;
   k=m;
    }
    else if(k>n){
      result+=(k-n);
      k=m;
      n=0;
    }
  }
 
   cout<<result;
 
 
    return 0;
}
 
 