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
 string s;
 cin>>s;
 for(int i=0;i<s.size();i++)
 {
  if(s[i]=='H'||s[i]=='9'||s[i]=='Q')
  {
    cout<<"YES";
    return 0;
  }
 }
  cout<<"NO";
 
}