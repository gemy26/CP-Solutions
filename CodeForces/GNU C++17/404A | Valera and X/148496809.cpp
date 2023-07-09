#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
   int n;
   int counter=0,flag=0;
   cin>>n;
   char s[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>s[i][j];
       }
   }
   char val1=s[0][0];
   char val2=s[0][1];
   int p=1;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==j){
               if(s[i][j]!=s[0][0]){
                   cout<<"NO"; return 0;
                   }
           }
 else if(i+j==n-1){               
  if(s[i][j]!=s[0][0]){
cout<<"NO"; return 0;
  }
  
               
 }
           
           else {
if((s[i][j]==s[0][0])||(s[i][j]!=s[0][1])){cout<<"NO"; return 0;}
           
           }
           
          
       }
       
       }
        
        cout<<"YES";
          
 
return 0;
}