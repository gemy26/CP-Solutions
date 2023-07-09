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
    string s="";
      int res=1;
    int n,k;
    cin>>n>>k;
    if(k==0&&n==1){
      
      cout<<0;r;
    }
    if(n==1){cout<<k;r;}
    if(k==0&&n!=0)
   {
    cout<<"No solution";
   }
    else
    {
      s=to_string(k);
      for(int i=1;i<n;i++)
      {
         
        s+='0';
      }
       cout<<s;
       r;
   }
   
   
}
  
 
  
 
 
 