#include <bits/stdc++.h>
#include <string>
#define ll long long
#define el "\n"
#define r return 0;
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
 int n;
 cin>>n;
  string s[n];
  for(int i=0;i<n;i++)
    cin>>s[i];
  if(n==1){cout<<s[0]; r;}
  sort(s,s+n);
  string s1;
 // int s,s2;
  int x=0,y=0;
for(int i=0;i<n;i++)
{
  if(s[0]==s[i])
  {
    x++;
   
  }
  else{
    s1=s[i];
  }
}
for(int i=0;i<n;i++)
{
  if(s1==s[i])
  {
    y++;
   
  }
  
}
if(x>y){cout<<s[0]; r;}
else{cout<<s1;}
  }
  