#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
  int  t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      if(n%2==0){
          cout<<n/2<<endl;
      }
      else if(n%2!=0){
          cout<<(n+1)/2<<endl;
      }
  }
 
  
 
 
    return 0;
}