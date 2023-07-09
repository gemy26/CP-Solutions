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
    int n; cin>>n;
    int x;
    set<int>nums;
    for(int i=0;i<n;i++)
    {
    cin>>x;
    nums.insert(x);
}
//if(nums.size()==1){cout<<0<<endl; continue;}
if((n-nums.size())%2==0){cout<<nums.size()<<endl;}
else{cout<<nums.size()-1<<endl;}
 
  }
}
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 