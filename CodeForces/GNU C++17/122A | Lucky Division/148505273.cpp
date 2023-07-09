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
    int flag=0;
   int n;
   cin>>n;
   if(n%4==0||n%7==0||n%47==0||n%744==0){cout<<"YES";return 0;}
   else {
       string s;
       s=to_string(n);
       
       for(int i=0;i<s.size();i++){
           if(s[i]=='4'){
           counter++;}
 if(s[i]=='7'){flag++;}
       }
      
      if(counter+flag==s.size()){cout<<"YES";}
      else{cout<<"NO";}
       
   }
   
return 0;
}