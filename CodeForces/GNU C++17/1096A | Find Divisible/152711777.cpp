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
 int t;
 
 cin>>t;
 while(t--)
  {
    int x,y;
    cin>>x>>y;
     cout<<x<<" "<<x+x<<endl;
 
    }
 
 
 
 
}