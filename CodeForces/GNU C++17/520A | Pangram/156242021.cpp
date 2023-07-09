#include <bits/stdc++.h>
#include <vector>
#include<iterator>
#include <algorithm>
#include <sstream>
#define  ll long long
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
  int n;
  cin>>n;
 int cnt=0;
 string s;
 cin>>s;
 char a[n];
 for(int i=0;i<n;i++)
 a[i]=tolower(s[i]);
sort(a,a+n);
 
for(int i=0;i<n;i++)
{
  if(a[i]!=a[i+1])
    cnt++;
}
if(cnt>=26)
  cout<<"YES";
 
else
  cout<<"NO";
    
  }
  
 
  
 
 
 