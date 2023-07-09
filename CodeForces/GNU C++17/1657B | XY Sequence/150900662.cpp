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
     long long n, b, x, y, f = 0;
 
     long long sum = 0;
 
     cin >> n >> b >> x >> y;
     
     for (int i = 0; i < n; i++)
     {
 
       if (f + x <= b)
       {
         f += x;
         sum += f;
       }
       else
       {
         f -= y;
         sum += f;
       }
     }
     cout << sum <<endl;
   }
   
    return 0;
}