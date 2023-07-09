#include <bits/stdc++.h>
#define el "\n"
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
  if(n<=1399)
  {
    cout<<"Division"<<" "<<4<<el;
  }
  else if(n >=1400&&n<=1599)
  {
     cout<<"Division"<<" "<<3<<el;
  }
  else if(n>=1600&&n<=1899)
  {
    cout<<"Division"<<" "<<2<<el;
  }
  else
  {
    cout<<"Division"<<" "<<1<<el;
  }
}
}