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
 
 
 int t;
 cin>>t;
 while(t--)
 {
  int a[4];
  for(int i=0;i<4;i++)
    cin>>a[i];
 
int one ,two;
one=max(a[0],a[1]);
two=max(a[2],a[3]);
sort(a,a+4);
if((one==a[3]&&two==a[2])||(one ==a[2]&&two==a[3]))
{
cout<<"YES";
cout<<endl;}
else
  cout<<"NO"<<endl;
 
 }
 
 
}