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
 int a[12];
 int k;
 cin>>k;
 int prefix[12]={0};
 for(int i=0;i<12;i++){
   cin>>a[i];
  
 }
 if(k==0){cout<<0;return 0;}
sort(a,a+12);
 
 for(int i=1;i<12;i++)
 {
  a[i]+=a[i-1];
 }
int flag=0;
//cout<<a[11];
for(int i=11;i>=0;i--)
{
for(int j=11;j>=0;j--)
  {
    int sub;
  sub=a[i]-a[j];
  if(sub>=k)
  {
    flag=1;
    cout<<i-(j);
    return 0;
  }
  }
}
if(a[11]==k)
{
  cout<<12; return 0;
}
cout<<-1;
 
 
}
 