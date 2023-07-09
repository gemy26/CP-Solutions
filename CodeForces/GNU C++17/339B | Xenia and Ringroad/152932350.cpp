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
 int n,m;
 cin>>n>>m;int x=0;
 int a[m+1];
 for(int i=1;i<=m;i++)
 {
  cin>>a[i];
 }
 long long res=0;
 for(int i=1;i<=m;i++)
 {
  if(i==1){res+=(a[i]-1); x=a[i]; continue;}
  
   else if(a[i]>x)
    {
      res+=(a[i]-a[i-1]);
      x=a[i];
      continue;
    }
    if(a[i]==x){res=res;}
    else{
      res+=(n-(a[i-1]-a[i]));
      x=a[i];
    }
  
 }
  
 cout<<res;
}