#include <bits/stdc++.h>
const int AK=5e5+5;
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
   int even[n];
  int odd[n];
  int eve=0;
  int od=0;
  for(int i=0;i<n;i++)
   { 
    cin>>a[i];
    if(a[i]%2==0){eve++;}
    else{od++;}
    even[i]=a[i];
    odd[i]=a[i];
  }
  
 
  
  for(int i=0;i<n;i++)
  {
  if(i%2==0){even[i]++;}
  else{odd[i]++;}
 }
 int cnt1=0,cnt2=0;
for(int i=0;i<n;i++)
{
  if(even[i]%2==0){cnt1++;}
  else{cnt2++;}
 
}
if(cnt1==n||cnt2==n||eve==n||od==n){cout<<"YES";}
else{cout<<"NO";}
 cout<<endl;
}
}