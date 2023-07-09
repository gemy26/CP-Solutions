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
 int n,m;
 cin>>n>>m;
 int a[n];
 int res=0;
 
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  
 }
sort(a,a+n);
for(int i=0;i<m;i++)
{
  if(a[i]<0)
  res+=abs(a[i]);
 
}
cout<<res;
}