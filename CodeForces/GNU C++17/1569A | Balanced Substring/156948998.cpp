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
    int x;
    int y;
    int n;
    int ia,ib;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    if(n==1)
    {
      cout<<-1<<" "<<-1<<endl;
      continue;
    }
    if(n==2&&s[0]==s[1])
    {
      cout<<-1<<" "<<-1<<endl;
      continue;
    }
    
    
    x=s.find("ab");
    y=s.find("ba");
    if(x!=-1)
    {
      cout<<x+1<<" "<<x+2;
      goto here;
    }
 
if(y!=-1)
    {
      cout<<y+1<<" "<<y+2;
      goto here;
    }
    else
    {
      cout<<-1<<" "<<-1<<endl;
    }
 
here:cout<<endl;
 
    }
 
 
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 