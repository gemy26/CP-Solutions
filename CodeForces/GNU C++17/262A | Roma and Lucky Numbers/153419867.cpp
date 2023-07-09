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
 int n,k;
 cin>>n>>k;
int cnt=0;
for(int i=0;i<n;i++)
{
  int counter=0;
  string s1;
  cin>>s1;
  for(int  j=0;j<s1.size();j++)
  {
    if(s1[j]=='4'||s1[j]=='7')
      counter++;
  }
  if(counter<=k)
    cnt++;
}
cout<<cnt;
}
  