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
int cnt1=0,cnt2=0;
vector<int> v;
while(t--)
{
  
  int a,b;
  cin>>a>>b;
  v.push_back(a);
  
  if(a!=b)
    cnt1++;
 
}
for(auto i=v.begin();i!=v.end()-1;i++){
  if(*i<*(i+1))
  cnt2++;
}
 
  
  if(cnt1!=0){
    cout<<"rated";
    return 0;
  }
  if(cnt1==0&&cnt2!=0)
  {
    cout<<"unrated";
    return 0;
  }
  if(cnt1==0&&cnt2==0)
  {
    cout<<"maybe";
    return 0;
  }
 
 
 
 
 
 
 
 
 
}