#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main()
{
   int t;
   cin>>t;
  
   while(t--)
   {
      int a,b,x,y;
      cin>>a>>b>>x>>y;
      int o = (b - 1 - y)*a; 
      int p=(a - 1 - x)*b;
         int r=max(o,(a*y));
         int g = max(p, (b* x));
         cout << max(r, g) << endl;
   }
   
    return 0;
}