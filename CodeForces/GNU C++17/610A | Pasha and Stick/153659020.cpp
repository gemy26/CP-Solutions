#include <bits/stdc++.h>
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
 
int main()
{
  
  ll x;
  cin>>x;
 /* int f=0;
  int cnt=0;
  //if(x/4==1){cout<<0; r;}
  //if(x==6){cout<<1; r;}
   for(int i=2;i<x;i++)
   {
    if(i%2==0)
      cnt++;
   }
    cout<<cnt/2;
    */
if(x%2!=0){cout<<0; r;}
    cout<<(x-2)/4;
  
  }