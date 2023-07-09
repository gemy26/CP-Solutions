#include <iostream>
#include <bits/stdc++.h>
#include <string> 
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
 int n;  int counter=0; int flag=0;
 cin>>n;
 char ch[n];
for(int i=0;i<n;i++)
{
    cin>>ch[i];
}
sort(ch,ch+n);
if(n==1){cout<<"YES"; return 0;}
for(int i=0;i<n;i++)
{
    if(ch[i]==ch[i+1]){
counter++;
flag=1;
    }
    else {flag=0;}
    if(counter>=1&&flag==1){
        cout<<"YES";
        return 0;
    }
    else {
        counter=0;
    }
 
}
 cout<<"NO";
 
 
return 0;
}