#include<bits/stdc++.h>
#define  ll long long
//#define r return 0
#define yes cout<<"YES";
#define no cout<<"NO";
#define el cout<<"\n";
const int AK=5e5+5;
const long long VVB=5e9+5; 
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
    return gcd(a-b, b);
    return gcd(a, b-a);
}
 
int main()
{
 
int t;
cin>>t;
while(t--)
{
  int n,d;
  int cnt=0;
  cin>>n>>d;
  int a[n];
  for(int i=0;i<n;i++)
  {  cin>>a[i];
    if(a[i]<=d)
      cnt++;
  }
  if(cnt==n){cout<<"YES";goto here;}
  else
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(a[i]+a[j]<=d&&i!=j)
          {cout<<"YES";goto here;}
      }
    }
  }
  cout<<"NO";
  here:
  cout<<endl;
}
  
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 