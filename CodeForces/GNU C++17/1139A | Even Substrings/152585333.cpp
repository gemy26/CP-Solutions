#include<bits/stdc++.h>
using namespace std;
int main()
{
 
  int x;
cin>>x;
int counter=0;
string s;
cin>>s;
for(int i=0;i<x;i++)
{
 if(s[i]%2==0)
 {
  counter+=i+1;
 }
 }
 cout<<counter;
}
 
 
 