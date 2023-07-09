#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
 
int  x;
cin>>x;
int counter=0;
int s[x];
int temp=0;
for(int i=0;i<x;i++){
   cin>>s[i];
}
sort(s,s+x);
int maxi=-999999999;
 
   for(int i=0;i<x;i++){
      if(s[i]!=0){
         if(s[i]>maxi){
            counter++;
            maxi=s[i];
         }
      }
 
   }
 
cout<<counter;
 
return 0;
}