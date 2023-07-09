#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
   
char arr[4][4];
for(int i=0;i<4;i++){
   for(int j=0;j<4;j++){
      cin>>arr[i][j];
   }
}
for(int i=0;i<3;i++){
   for(int j=0;j<3;j++){
      int counter=0;
     if(arr[i][j]==arr[i][j]){
        counter++;
        }
      if(arr[i][j]==arr[i][j+1]){
         counter++;
      }
      if(arr[i][j]==arr[i+1][j+1]){
         counter++;
      }
      if(arr[i][j]==arr[i+1][j]){
         counter++;
      }
 
      if(counter!=2){cout<<"YES"; return 0;}
   }
 
}
cout<<"NO";
 
return 0;
}