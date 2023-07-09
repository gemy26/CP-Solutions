#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
 
 
using namespace std;
 
int main()
{
 
int n;
cin>>n;
int s[1002];
s[0]=1;
 s[1]=1;
for(int i=2;i<1000;i++){
   s[i]=s[i-2]+s[i-1];
}
int flag=1;
   for(int i=1;i<=n;i++){
     if(i==s[flag]){
            cout<<"O";
            flag++;
         }
         else {cout<<"o";}
      }
   
 
return 0;
}