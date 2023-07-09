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
int n; cin>>n;
vector<int>v1;
vector<int>v2;
for(int i=0;i<n;i++)
{
    int x; cin>>x;
    int y; cin>>y;
    v1.push_back(x);
    v2.push_back(y);
}
 int price=v2[0];int sum=0;int res=0;
 for(int i=0;i<n;i++)
 {
    price=min(price,v2[i]);
   
    res+=(price*v1[i]);
    
 }
 cout<<res;
}