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
 
 
 //string s="ab";
// cout<<s[0]-s[1];
  int t;
   cin>>t;
    while(t--)
    {
       ll sum1=99999;
     ll sum=99999;
    int n,m;
    cin>>n>>m;
 char s[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>s[i][j];
    }
  }
  ll p;
for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
    p=0;
    for(int k=0;k<m;k++)
    {
      //if(s[i][k]<s[j][k])
      p+=abs(s[i][k]-s[j][k]);
       
    }
 
   sum=min(sum,p);
   
  }
 //sum1=min(sum,sum1);
}
//cout<<sum1<<endl;
cout<<sum<<endl;
   }
 
 }
  
 
  
 
 
 