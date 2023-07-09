#include <bits/stdc++.h>
#include <string>
#define ll long long
#define el "\n"
#define r return 0;
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
  int d;
  int n;
  cin>>d;
  cin>>n;
  int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int sum=0;
for(int i=0;i<n-1;i++)
{
  sum+=(d-a[i]);
}
cout<<sum;
}