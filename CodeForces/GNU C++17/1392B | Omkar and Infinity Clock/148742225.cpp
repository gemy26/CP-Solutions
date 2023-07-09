#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
       
        int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       
        k=(k%2)+2;
             while(k--){
 
                 long long   maxi;
    
             maxi=*max_element(arr,arr+n);
                            
            for(int j=0;j<n;j++)
            {
            arr[j]=maxi-arr[j];
            } 
 
    }
     for(int i=0;i<n;i++){
 
        cout<<arr[i]<<" ";
 
        }
 
  cout<<endl;
 
    }
 
return 0;
}