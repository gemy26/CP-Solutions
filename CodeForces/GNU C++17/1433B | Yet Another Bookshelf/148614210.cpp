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
while(t--){
 
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
int flag=0,counter=0,res=0;
for(int j=0;j<n;j++){
   
  if(flag==0&&arr[j]==1){
    flag=1;
  }
  if(flag==1&&arr[j]==0){
    counter++;
  }
  if(flag==1&&arr[j]==1){
    res+=counter;
    counter=0;
  }
}
cout<<res<<endl;
}
 
   
 
   
return 0;
}