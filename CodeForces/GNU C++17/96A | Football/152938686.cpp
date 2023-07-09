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
  if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0'&&s[i+6]=='0'){cnt++;}
  if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1'&&s[i+6]=='1'){cnt1++;}
 }
  if(cnt1>=1||cnt>=1){cout<<"YES";}
  else{cout<<"NO";}
 
}