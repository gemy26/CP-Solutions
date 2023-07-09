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
  int maxi=-9999999;
  int x;
  int frq[n+1]={0};
  for(int i=0;i<n;i++)
   { cin>>a[i];
    frq[a[i]]++;
    //maxi=max(maxi,a[i]);
  }
  
  //int size=sizeof(a)/sizeof(a[0]);
  
  for(int i=0;i<n+1;i++)
  {
   if(frq[i]>=3) {cout<<i;goto here;}
 }
 cout<<-1;
 here:
 cout<<endl;
}
}