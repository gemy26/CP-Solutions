#include <iostream>
#include <bits/stdc++.h>
#include <string> 
 
using namespace std;
 
int main()
{
 string s;
 string t;
 int counter=1;
 cin>>s;
 cin>>t;
 int j=0;
 int n=t.size();
 for(int i=0;i<n;i++){
     
     if(s[j]==t[i]){
        counter++;
        j++;
     }
     
 }
 cout<<counter;
 
   return 0;
}