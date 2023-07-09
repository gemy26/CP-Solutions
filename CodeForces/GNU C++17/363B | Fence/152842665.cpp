#include <bits/stdc++.h>
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
 long long n,w;
 cin>>n>>w;
 if(n==1)
 {
  cout<<1;
  return 0;
 }
 
 int a[150003]={0};
 int p[150003]={0};
 for(int i=1;i<=n;i++)
 {
  cin>>a[i];
a[i]+=a[i-1];
 }
 int mini=15000003;
 int z;
 
 for(int i=w;i<=n;i++)
 {
  if(mini>a[i]-a[i-w])
  {
    mini=a[i]-a[i-w];
    z=i;
  }
 }
 cout<<z-w+1;
 
}