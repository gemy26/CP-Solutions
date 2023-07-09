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
    string s,s1="",s2,s22="",s33="";
    cin>>s>>s2;
    int n1,n2;
     n1= stoi(s);
     n2= stoi(s2);
    int n3=n1+n2;
      string s3= to_string(n3);
 
 
    for (int i = 0; i < s.size(); ++i)
    {
      if(s[i]!='0'){s1+=s[i];}
    }
 
     int num = stoi(s1);
 
for (int i = 0; i < s2.size(); ++i)
    {
      if(s2[i]!='0'){s22+=s2[i];}
    }
    int num2 = stoi(s22);
for (int i = 0; i < s3.size(); ++i)
    {
      if(s3[i]!='0'){s33+=s3[i];}
    }
    int num33 = stoi(s33);
    if(num33==num+num2)
    {
      cout<<"YES"; return 0;
    }
    cout<<"NO";
}