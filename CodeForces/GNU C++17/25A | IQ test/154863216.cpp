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
int even(int i){
  return (i%2);
}
int main()
{
 
int n;
cin>>n;
int even=0,odd=0;
vector<int>v;
vector<int>ev;
vector<int>od;
for(int i=0;i<n;i++){
  int x; cin>>x;
  v.push_back(x);
   if(v[i]%2==0)
    {
      even++;
      ev.push_back(i);
    }
   else{
 odd++;
  od.push_back(i);
   }
   
}
if(odd>even){
for(int i=0;i<n;i++)
{
  if(od[i]!=od[i]+1)
 
  {
     return  cout<<ev[i]+1,0;
  }
}
}
else
{
 
for(int i=0;i<n;i++)
{
  if(ev[i]!=ev[i]+1)
 
  {
     return  cout<<od[i]+1,0;
  }
}
}
}