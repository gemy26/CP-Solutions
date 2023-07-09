#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x=0;
  for(int i=n;i>0;i--)
  {
    if(n%i!=0)
    {
      x=i;
      break;
    }
  }
  n=x-n;
  cout<<abs(n);
 
 
 
 
 
 
 
 
 
  return 0;
}
 
 
 