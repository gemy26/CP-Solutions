#include<bits/stdc++.h>
#include <functional>
#include <algorithm>
#include <iostream>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <string>
#include <deque>
#include <list>
#include <numeric>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#define  ll long long
#define r return 0
#define yes cout<<"YES";
#define no cout<<"NO";
const int AK=5e5+5;
const long long VVB=5e9+5; 
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
    return gcd(a-b, b);
    return gcd(a, b-a);
}
 
int main()
{
  int t;
  cin>>t;
while(t--)
{
  ll sum=0;
  int n;
  cin>>n;
    ll p=99999999;
  ll a[n];
  // if(n==1){cout<<0;
  //   continue;}
  for(int i=0;i<n;i++)
  {
 
    cin>>a[i];
    if(a[i]<p)
      p=a[i];
  }
 
  
   
   for(int i=0;i<n;i++)
   {
     if(a[i]!=p)
      sum+=(a[i]-(p));
   }
   cout<<sum<<endl;
}
 
 
 }
  
 
  
 
 
 