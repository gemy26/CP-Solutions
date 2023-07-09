#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
 
 
 
 
using namespace std;
 
int main()
{
    int sum=0;
  int arr[6];
  for(int i=0;i<6;i++){
      cin>>arr[i];
      sum+=arr[i];
  }
  
for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        for(int k=0;k<6;k++){
if(((sum-(arr[i]+arr[j]+arr[k]))==(arr[i]+arr[j]+arr[k]))&&i!=j&&i!=k&&j!=k){cout<<"YES"; return 0;}
        }
    }
}
 
 
cout<<"NO";
   
return 0;
}