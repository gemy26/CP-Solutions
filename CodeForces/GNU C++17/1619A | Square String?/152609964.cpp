#include <bits/stdc++.h>
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
  int t;
  cin>>t;
  while(t--)
  {
 
 
 string s;
 cin>>s;
if(s.size()%2==0&&s.substr(0,s.size()/2)==s.substr(s.size()/2))
{
  cout<<"YES"<<endl;
 }
 else {
  cout<<"NO"<<endl;
 }
}
 
 
 
}