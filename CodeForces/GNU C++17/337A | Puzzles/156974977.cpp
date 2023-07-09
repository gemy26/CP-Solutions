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
 
 
 
 
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++)
cin>>a[i];
int res,s,mm;
int x=99999999;
sort(a,a+m);
for(int i=0;i<m-n+2;i++)
{
  mm=*max_element(a+i,a+n+i);
  s=*min_element(a+i,a+n+i);
  res=mm-s;
  x=min(x,res);
}
cout<<x;
  
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 