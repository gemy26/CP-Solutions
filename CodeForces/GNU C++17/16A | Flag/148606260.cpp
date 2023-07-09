#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
 
 
 
 
using namespace std;
 
int main()
{
  
 
 
   int n;
   cin>>n;
   int w;
   cin>>w;
   char ch[n][w];
   for(int i=0;i<n;i++){
     for(int j=0;j<w;j++){
       cin>>ch[i][j];
     }
   }
   for(int i=0;i<n;i++){
     for(int j=0;j<w-1;j++){
       if(ch[i][j]!=ch[i][j+1]){cout<<"NO"; return 0;}
      
     }
   }
   for(int i=0;i<n-1;i++){
     for(int j=1;j<w;j++){
       if(ch[i][0]==ch[i+1][0]){cout<<"NO"; return 0;}
      
     }
   }
 
   cout<<"YES";
 
   
return 0;
}