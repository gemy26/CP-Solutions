#include <bits/stdc++.h>
#include <vector>
#include<iterator>
#include <algorithm>
#include <sstream>
#define  ll long long
#define r return 0
#define yes cout<<"YES";
#define no cout<<"NO";
const int AK=5e5+5;
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
      
      int k,l,m,n,d;
      cin>>k>>l>>m>>n>>d;
      int cnt=0;
      for(int i=1;i<=d;i++)
      {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
          cnt++;
      }
 
 
cout<<cnt;
 
    
}
  
 
  
 
 
 