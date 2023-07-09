#include<bits/stdc++.h>
using namespace std;
int main()
{
 
   int n; int t; float x=9999999; float a; float b; float m; float res;
   cin>>n>>m;
   while(n--)
   {
    cin>>a>>b;
    res=(a/b)*m;
    
    x=min(res,x);
 
   }
  
   printf("%.7lf\n",x);
 
 
 
 
}
 
 
 