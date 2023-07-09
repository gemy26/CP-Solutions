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
#define el cout<<"\n";
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
  int a,b,c,x,y;
  cin>>a>>b>>c>>x>>y;
  if(a>=x&&(b>=y||c+b>=y)){
    yes; el; continue;
  }
  if(b>=y&&(a>=x||a+c>=x))
    {yes; el; continue;}
  if(x>a&&y>b)
  {
   if((a+b+c)>=(x+y)&&c!=0)
   {yes;el; }
 
else
  {no;el;}
}
else{
  no;el;
 
  }
 
 }
}
 
 
  
 
  
 
 
 