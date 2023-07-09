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
  string s;
  int n;
  cin>>n>>s;
  int cnt=0;
  for(int i=n-1;i>=0;i--)
  {
if(s[i]==')'){
  cnt++;
}
else 
  break;
  }
  if(cnt>(n-cnt))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}
}