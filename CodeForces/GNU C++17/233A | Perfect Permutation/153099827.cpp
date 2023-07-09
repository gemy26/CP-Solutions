#include <bits/stdc++.h>
#include <string>
#define ll long long
#define el "\n"
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
 int cnt=0;
 if(n%2!=0){cout<<-1; return 0;}
 
 int a[n+5]={0};
 for(int i=1;i<=n;i++)
  a[i]=i;
int flag=2;
for(int i=1;i<=n;i++)
{
  
  if(flag%2==0){
 
    swap(a[i],a[i+1]);
   
  }
   flag++;
}
for(int i=1;i<=n;i++)
cout<<a[i]<<" ";
}
  