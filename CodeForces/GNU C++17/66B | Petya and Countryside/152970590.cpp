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
 int n;
 cin>>n;
 int a[n+3];
 
 int res=1;
 for(int i=0;i<n;i++)
  cin>>a[i];
for(int i=0;i<n;i++)
{
  int cnt=1;
  for(int j=i-1;j>-1;j--)
  {
    if(a[j+1]>=a[j])
    {
      cnt++;
    }
    else
      break;
  }
  for(int j=i+1;j<n;j++)
  {
    if(a[j-1]>=a[j]){cnt++;}
  
else
  break;
}
res=max(res,cnt);
}
cout<<res;
}