 
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main( ){
 
int n,counter=0;
 
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
  cin>>a[i]>>b[i];
 
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if(a[i]==b[j]){
      counter++;
    }
  }
}
cout<<counter;
   
    return 0;
}