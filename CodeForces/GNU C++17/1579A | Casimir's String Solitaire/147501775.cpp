#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   int n;
   cin>>n;
   int a=0,b=0,c=0;
   while(n--){
         cin>>s;
      for(int i=0;i<s.size();i++){
         if(s[i]=='A'){
            a++;
         }
         else if(s[i]=='B'){
            b++;
         }
         else c++;
 
 
 
      }
      if(a==(b-c)){cout<<"YES"<<endl;a=0;b=0;c=0;continue;}
         else {cout<<"NO"<<endl; a=0;b=0;c=0; continue;}
 
 
 
 
 
 
   }
 
 
 
 
 
 
 
 
 
 
    return 0;
}