#include<bits/stdc++.h>
using namespace std;
int main()
{
  int r;
  cin>>r;
  int a[r];
  for(int i=0;i<r;i++)
  {
    cin>>a[i];
  }
  sort(a,a+r);
  int n=(a[r-1]-a[0])+1;
  cout<<abs(n-r);
 
 
 
 
 
 
 
 
 
 
  return 0;
}
 
 
 