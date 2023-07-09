#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
 
 
using namespace std;
 
int main()
{
  
 
 
    int counter=0;
    int counter1=0;
    int flag=0;
   long long n;
   cin>>n;
 //if(n%4==0||n%7==0||n%744||n%47==0){cout<<"YES"; return 0;}
  while(n!=0){
      int val=n%10;
      if(val==4||val==7){
          counter++;
      }
      
n/=10;
flag++;
  }
  if(counter==4||counter==7){cout<<"YES";}
    else{cout<<"NO";}   
   
   
 
return 0;
}