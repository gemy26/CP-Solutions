#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
  int counter=0;
     string s;
    int n; int flag=1;
    cin>>n;
     char ch;
     cin>>ch;
     while(n--){
         cin>>s;
         flag=1;
for(char i='0';i<=ch;i++){
     
   if(s.find(i)==-1){flag=0; break;}
 
 
     }
     if(flag==1){
 
         counter++;
     }
     }
    
 
cout<<counter;
 
 
    return 0;
}