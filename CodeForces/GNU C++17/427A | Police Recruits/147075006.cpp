#include<iostream>
//#include<bits/stdc++>
#include<string>
using namespace std;
int main( ){
 
 int n,counter=0,police=0;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
   cin>>arr[i];
 }
 for(int i=0;i<n;i++){
   if(arr[i]<0){
     if(police==0){
counter++;
     }
     else {
       police--;
     }
     
   }
   else {police+=arr[i];}
 }
 cout<<counter;
 
   
    return 0;
}