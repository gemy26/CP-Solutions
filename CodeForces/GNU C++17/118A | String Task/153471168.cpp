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
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
  //"A", "O", "Y", "E", "U", "I"
  if(s[i]=='a'|| s[i]=='o' || s[i]=='y' || s[i]=='e'|| s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I')
  {
    s[i]='0';
  }
}
for(int i=0;i<s.size();i++)
{
  if(s[i]!='0')
  cout<<'.'<<(char)tolower(s[i]);
}
}