#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
string s;
int n;
cin>>n;
cin>>s;
 
int counter=0;
for(int i=0;i<n;i++){
  if(s[i]==s[i+1]){
    counter++;
  }
}
cout<<counter;
 
 
 
 
}