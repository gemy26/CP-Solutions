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
    
  // int n;
  // //string ch;
  // int t;
  // cin>>n;
  // cin>>t;
 
  // //cin>>ch;
  
 
  // if(n==1&&t>9)
  //   {cout<<-1; return 0;}
  
  //   //string s;
  // for(int i=0;i<n;i++)
  // {
  //   cout<<t;
  // }
  //cout<<s;
  int cnt=0;
  int eq=1;
  int x,y;
  cin>>x>>y;
  eq=x*y;
  char ch[x][y];
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<y;j++)
    {
      cin>>ch[i][j];
      
    }
  }
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<y;j++)
    {
      if(ch[i][j]=='W'||ch[i][j]=='B'||ch[i][j]=='G')
        cnt++;
    }
  }
  if(eq==cnt)
  {
    cout<<"#Black&White"; return 0;
  }
  
else
{
  cout<<"#Color";
}
 
 
}
 