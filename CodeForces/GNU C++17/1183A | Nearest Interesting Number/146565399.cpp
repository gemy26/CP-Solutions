#include <iostream>
#include<string>
 
using namespace std;
 
int main()
{
   int f,s ,t=0,num ,n,d;
    int sum1=0;
 
    cin>>t;
 
   for(int i=t;i<1020;i++){
       int x=i;
      f=x%10;
      x/=10;
      s=x%10;
      x/=10;
      t=x%10;
      x/=10;
      d=x;
      sum1=f+s+t+d;
      if(sum1%4==0){
         cout<<i;
         break;
      }
 
 
 
 
 
   }
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}