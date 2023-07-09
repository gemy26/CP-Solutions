#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
  
 int t;//test cases
 cin>>t; 
 
    
 while(t--){
     int even=0; int odd=0;
     int sum=0;
 int n; 
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
       
        cin>>arr[i];
       if(arr[i]%2!=0){
           odd++;
       }
       else {even++;}
      
 sum+=arr[i];
    }
    if(sum%2!=0){
        cout<<"YES"<<endl;
    }
    else{
        if(odd==n||odd==0)
            cout<<"NO"<<endl;   
            else 
            cout<<"YES"<<endl;     
    }
   
 }
 
    return 0;
}