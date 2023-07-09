#include <bits/stdc++.h>
#define ll long long
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
  int x=n;
  if(n%7==0)
    cout<<n<<endl;
  
  else{
    n-=(n%10);
    while(n%7!=0)
    {
 
      n++;
    }
 
cout<<n<<endl;
}
}
}