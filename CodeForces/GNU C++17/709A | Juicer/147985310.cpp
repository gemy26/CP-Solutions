#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
int n,b,d;
int sum=0;
int counter=0;
cin>>n>>b>>d;
for(int i=0;i<n;i++){
   int a;
   cin>>a;
   
    if(a>b){
   continue;
   }
   
 
  sum+=a;
 if(sum>d){
      counter++;
      sum=0;
   }
   
}
cout<<counter;
 
   return 0;
}