#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
 
 
 
 
using namespace std;
 
int main()
{
  
 int n;
 cin>>n;
 if(n==1){
  cout<<"1\n1"; 
  return 0;
 }
 if(n==2){
cout<<"1\n1"; 
  return 0;
 }
 if(n==3){
  cout<<"2\n1 3";
  return 0;
 }
 if(n==4){
  cout<<"4\n3 1 4 2 ";
  return 0;
 }
 else {
  cout<<n<<endl;
  for(int i=1;i<=n;i++){
   if(i%2!=0){
    cout<<i<<" ";
   }
        }
   for(int i=2;i<=n;i++){
    if(i%2==0){
     cout<<i<<" ";
    }
   }
  }
 
 
   
return 0;
}