#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
#define FAST ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
using namespace std;
int main()
{
    FAST
    
    //vector<int >ahmed;
   // vector name.push_back(value) to storing
   //vector name.erase(vector name .begin()+index want to delet);
int t;
cin>>t;
while(t--){
    int n;
    int index=-1;
    cin>>n;
    int arr[n+2];
    int copy [n+2];
    arr[0]=-1;arr[n+1]=-1;
    copy[0]=-1;copy[n+1]=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        
    }
    for(int i=1;i<=n+2;i++)
    {
      
        copy[i]=arr[i];
    }
    sort(arr+1,arr+n+1);
    
      for(int i=1;i<=n;i++)
    {
        if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1]){
          index=arr[i];
          break;
        }
 
    }
    if(index==-1){cout<<-1<<endl;}
    else {
    for(int i=1;i<=n;i++){
if(index==copy[i]){
    cout<<i<<endl;
    break;
}
 
    }
    }
    
}
return 0;
}