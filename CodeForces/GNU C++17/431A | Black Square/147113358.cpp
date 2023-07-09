#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main(){
string s;
 
 
int result=0;
 
int arr[4];
 
for(int i=0;i<4;i++){
    cin>>arr[i];
}
cin>>s;
for(int i=0;i<s.size();i++){
    int num=(s[i]-'0');
 
    result+= arr[num-1];
 
}
 
cout<<result;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;
}