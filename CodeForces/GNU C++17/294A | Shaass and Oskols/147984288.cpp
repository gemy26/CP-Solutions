#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
 int m,n,a;
 cin>>n;
int  arr[n];
 for(int i=1;i<=n;i++){
    cin>>arr[i];
 }
 cin>>m;
 while(m--){
    int x,y;
    cin>>x>>y;
  
       arr[x-1]+=(y-1);
       arr[x+1]+=(arr[x]-y);
      arr[x]=0;
    
   
 }
 for(int i=1;i<=n;i++){
    cout<<arr[i]<<endl;
 }
 
 
 
   return 0;
}