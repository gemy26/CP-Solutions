#include <bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int main()
{
 int n;
 cin>>n;
 int a[n];
int frq[4]={0};
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  frq[a[i]]++;
 }
 sort(frq,frq+4);
 cout<<n-frq[3];
}