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
  int sum1=0;
  int sum2=0;
  int sum3=0;
 int n;
 cin>>n;
 int a[n];
 int cnt=0;
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  sum3+=a[i];
  if(a[i-1]==a[i]){
    cnt++;
  }
 }
 
 
int s,t;
cin>>s>>t;
if(s==t)
{
  cout<<"0";
  return 0;
}
//if(cnt+1==n){
  //cout<<a[0];
  //return 0;
//}
//else
//{
  for(int i=min(s,t)-1;i<=max(s,t)-2;i++)
  {
sum1+=a[i];
  //}
 
 
}
 
 
cout<<min(sum3-sum1,sum1);
}