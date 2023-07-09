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
    string s;
    cin>>s;
    int cnt=0;
    int res=0;
int f=0,c=0;
    for(int i=0;i<s.size();i++)
    {
      //cnt=0;
      //'A', 'E', 'I', 'O', 'U' and 'Y'.
      cnt++;
      if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
      {
   res=max(res,cnt);
   f++;
   cnt=0; //cnt++;
      }
      if(i==s.size()-1)
      {
        cnt++;
        res=max(res,cnt);
      }
      else
      {
        c++;
      }
 
    }
    //cout<<cnt;
    if(c!=0&&f==0)
    {
      cout<<1+s.size();return 0;
    }
    cout<<res;
 
}
 