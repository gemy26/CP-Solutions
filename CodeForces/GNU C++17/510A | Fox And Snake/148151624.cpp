#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
 
int  x,y;
cin>>x>>y;
int counter=0;
int flag=1;
for(int i=0;i<x;i++){
   if(i%2==0){
      for(int i=0;i<y;i++){
 cout<<"#";
      }
     
   }else{
      if(flag==1){
        for(int i=0;i<y-1;i++){cout<<".";}
        cout<<"#";
         flag=0;
      }
      else{
        cout<<"#";
        for(int i=0;i<y-1;i++){cout<<".";}
         
         flag=1;
      }
   }
   
cout<<endl;
}
 
 
return 0;
}