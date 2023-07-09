#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int n,counter=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
 
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
         if(arr[i]==arr[j]&&i!=j){
            
                arr[i]=0;
         }
      }
   }
   for(int i=0;i<n;i++)
   {
         if(arr[i]!=0)
         {
         counter++;
         }
    }
cout<<counter<<endl;
      for(int i=0;i<n;i++){
         if(arr[i]!=0){
 
      cout<<arr[i]<<" ";
         }
      }
    return 0;
}