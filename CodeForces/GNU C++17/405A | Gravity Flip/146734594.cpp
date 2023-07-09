#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
  
   int n,temp,j;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
         cin>>arr[i];
   }
  
  
 for(int i=0;i<n;i++)
 {  
  for( j=i+1;j<n;j++)
  {
   if(arr[i]>arr[j])
   {
    temp  =arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 }
   for(int k=0;k<n;k++){
         cout<<arr[k]<<" ";
   }
   
   
   
   
  
 
 
 
 
 
 
 
 
      return 0;
}