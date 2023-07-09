#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
int counter=0;
int flag=1;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
   cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n;i++){
   if(arr[i]>=flag){
      counter++;
      flag++;
   }
   else {
      continue;
   }
}
cout<<counter;
return 0;
}