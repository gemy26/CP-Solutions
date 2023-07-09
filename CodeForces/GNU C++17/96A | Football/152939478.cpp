#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;
/*bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}*/
 
int main()
{
 string s;
 cin>>s;
 int cnt=0;
 int cnt1=0;
 
 for(int i=0;i<s.size();i++)
 {
  if(cnt==7)break;
  if(s[i]=='1')cnt++;
  else cnt=0;
 }
 for(int i=0;i<s.size();i++)
 {
  if(cnt1==7)break;
  if(s[i]=='0')cnt1++;
  else cnt1=0;
 }
 if(cnt==7||cnt1==7)
  cout<<"YES";
else
  cout<<"NO";
}