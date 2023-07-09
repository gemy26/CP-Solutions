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
  int n;
  cin>>n;
  int a[n];
  int sum1=0;
  int sum=0;
  int one=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum1+=a[i];
    if(a[i]==1){one++;}
  }
  
  if(sum1%2!=0){cout<<"NO"<<el;}
  
  
    if(sum1%2==0)
    {
      if((sum1/2)%2==0){cout<<"YES"<<el;}
      else if((sum1/2)%2!=0&&one!=0){cout<<"YES"<<el;}
      else{cout<<"NO"<<el;}
    }
  
    
}
 
}