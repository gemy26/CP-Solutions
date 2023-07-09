#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
   int arr[5][5];
   int c,r;
   for(int i=0;i<5;i++){
         for(int j=0;j<5;j++){
               cin>>arr[i][j];
         }
   }
   for(int i=0;i<5;i++){
         for(int j=0;j<5;j++){
               if(arr[i][j]==1){r=i;
               c=j;
               cout<<abs(i-2)+abs(j-2);
               break;}
         }
   }
   
  
 
 
 
 
 
 
 
 
      return 0;
}