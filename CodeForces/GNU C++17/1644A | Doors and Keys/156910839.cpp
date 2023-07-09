#include<bits/stdc++.h>
#define  ll long long
//#define r return 0
#define yes cout<<"YES";
#define no cout<<"NO";
#define el cout<<"\n";
const int AK=5e5+5;
const long long VVB=5e9+5; 
using namespace std;
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
    return gcd(a-b, b);
    return gcd(a, b-a);
}
 
int main()
{
 
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  int r=0,b=0,g=0;
  for(int i=0;s[i];i++)
  {
    if(s[i]=='r')r++;
      if(s[i]=='b')b++;
        if(s[i]=='g')g++;
        if(s[i]=='R')
        {
          if(r>0)
            r--;
          else
          {
            cout<<"NO"; goto here;
          }
        }
        if(s[i]=='G')
        {
          if(g>0)
            g--;
          else
          {
            cout<<"NO"; goto here;
          }
        }
        if(s[i]=='B')
        {
          if(b>0)
            b--;
          else
          {
            cout<<"NO"; goto here;
          }
        }
 
  }
  cout<<"YES";
  here:
  el;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
  
 
 
 
 