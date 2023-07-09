#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
int n,t,k,d;
cin>>n>>t>>k>>d;
if(k>n){
   cout<<"NO";
   return 0;
}
else {
  int o1=0; int o2=d;
  int val=(n+k-1)/k;
  for(int i=0;i<val;i++){
     if(o2>=o1){o1+=t;}
     else {o2+=t;}
  }
  int time=max(o1,o2);
  if(time<(val*t)){cout<<"YES";}
  else {cout<<"NO";}
 
 
 
 
}
return 0;
}