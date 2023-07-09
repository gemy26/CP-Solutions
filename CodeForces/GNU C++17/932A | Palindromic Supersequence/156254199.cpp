#include <bits/stdc++.h>
#include<iostream>
#include <string>
#define ll long long
#define el "\n"
#define r return 0;
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
 
int main(void)
{
  
  string s;
  cin>>s;
   string rev=s;
   string sta=s;
   reverse(rev.begin(),rev.end());
   if(sta==rev)
   {
    cout<<sta;
    return 0;
   } 
   else
 {
  cout<<sta<<rev;
   }
   
   
  
 
  
  }