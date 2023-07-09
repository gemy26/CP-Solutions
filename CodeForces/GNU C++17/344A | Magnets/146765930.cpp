#include<iostream>
//#include<bits/stdc++>
#include<string>
using namespace std;
int main( ){
int n,f,s,x,flag=0,counter=0;
//string x,temp;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){  cin>>arr[i];}
 
 
for(int i=1;i<n;i++){
   
   if(( arr[i]%10==1&& arr[i-1]%10!=1)||( arr[i]%10==0&& arr[i-1]%10!=0)){counter++;}
 
}
    cout<<counter+1;
    return 0;
}