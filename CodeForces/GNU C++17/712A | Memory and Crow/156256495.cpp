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
 
int main()
{
  
  int n;
  cin>>n;
  ll a[n];
  ll res[n];
  for(int i=0;i<n;i++)
  {
cin>>a[i];
  }
  
  for(int i=0;i<n-1;i++)
  {
    res[i]=a[i]+a[i+1];
  }
  res[n-1]=a[n-1];
  for(int i=0;i<n;i++)
    cout<<res[i]<<" ";
 
 
 }
  