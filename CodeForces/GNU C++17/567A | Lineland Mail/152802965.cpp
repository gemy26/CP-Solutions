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
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 int x=99999;
 for(int i=0;i<n;i++)
  {
    if(i==0)
    {
      cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<endl;
      continue;
    }
    if(i==n-1)
    {
      cout<<abs(a[n-1]-a[n-2])<<" "<<abs(a[n-1]-a[0])<<endl;
    }
    else
    {
      cout<<min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]))<<" ";
      cout<<max( abs(a[i]-a[0]),abs(a[i]-a[n-1])  )<<endl;
    }
 
 
   }
  
}