#include <bits/stdc++.h>
#include<vector>
 
#define ll long long
#define el "\n"
using namespace std;
//------is prime---------//
bool isprime(int x)
{
  for (int i = 2; i <= x / i; i++)
    if (x % i == 0)
      return false;
  return true;
}
//----------binary search--------//
 int binarysearch(int a[],int key,int low,int high)
 {
  int middle=(low+high)/2;
  if(a[middle]==key) return middle;
  if(key>middle)return binarysearch(a,key,middle+1,high);
  else
    return binarysearch(a,key,low ,middle-1);
 }
 //--------GCD---------------//
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
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5; 
//----------------------//
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    ll x;
    cin>>x;
  ll res=sqrt(x);
  if(res*res==x&&res!=1)
  {
    if(isprime(res))
    {
      cout<<"YES"<<endl;
      continue;
    }
    else
    {
      cout<<"NO"<<endl;
 
    }
   
  }
  else
  {
    cout<<"NO"<<endl;
    continue;
  }
}
 
  // here: 
  //cout<<endl;
  
 
  
 
 
 
}
 