#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;
 
int main()
{
   
   int t;
   cin>>t;
   while(t--)
   {
       int f=0;
       long long  d;
       cin>>d;
       if(d>6){
       for(int i=1;i<=6;i++){
           if((d-i)%14==0){
               cout<<"YES\n";
               f=1;
            break;
            
           }
       }
       }
        if(f==0) cout<<"NO\n";
   }
 
    return 0;
}