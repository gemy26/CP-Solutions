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
 int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
ll sum=0;
 sum+=a[0]+1;
sum+=n;
for(int i=1;i<n;i++){
  sum+=abs(a[i]-a[i-1])+1; 
}
 
  cout<<sum-1;
}