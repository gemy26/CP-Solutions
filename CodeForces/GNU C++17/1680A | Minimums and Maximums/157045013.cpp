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
  int r1,l1,r2,l2;
  cin>>l1>>r1>>l2>>r2;
if(l1>=l2&&l1<=r2){
  cout<<l1<<endl;
  continue;
}
if(l2>=l1&&l2<=r1){
  cout<<l2<<endl;
  continue;
}
else{
  cout<<l1+l2<<endl;
  continue;
}
  
}
 
 
 
  
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 