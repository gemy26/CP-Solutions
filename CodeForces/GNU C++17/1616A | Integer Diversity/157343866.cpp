#include <bits/stdc++.h>
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
int main()
{
 
int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  int cnt=0,c=0;
  for(int i=0;i<n-1;i++)
  {
if(a[i]==a[i+1])
  a[i+1]=-a[i+1];
//if(a[i]==0)
//  c++;
  }
 
  //cnt=1;
sort(a,a+n);
for(int i=0;i<n-1;i++)
  {
if(a[i]!=a[i+1])
 cnt++;
}
//if(c==n){cnt=1; cout<<1<<endl; continue;}
  cout<<cnt +1<<endl;
 
}
}