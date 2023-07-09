#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
int main(){
 
 string s;     cin>>s;
 int n=s.size();
 int temp=97; int val=0;
 int counter=0;
 for(int i=0;i<n;i++){
       
     if  ( abs( s[i] - temp ) <= 13) {  
 
    counter += ( abs( s[i] - temp) );
 
    temp = s[i];
 
     }
 
     
     else {
         counter += ( 26 - abs(temp - s[i]) );
        temp = s[i];
 
 
 }
 }
cout<<counter;
 
    return 0;
}