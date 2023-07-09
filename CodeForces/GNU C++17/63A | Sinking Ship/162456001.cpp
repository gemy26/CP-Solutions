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
   string s1[n],s2[n];
 
   for(int i=0;i<n;i++)
    {cin>>s1[i]>>s2[i];}
vector<int>rat; vector<int>women; vector<int>child; vector<int>men; vector<int>cap;
 
for(int i=0;i<n;i++)
{
  if(s2[i]=="rat"){rat.push_back(i);}  
  if(s2[i]=="captain"){cap.push_back(i);}
  if(s2[i]=="woman"){women.push_back(i);}
  if(s2[i]=="man"){men.push_back(i);}
  if(s2[i]=="child"){women.push_back(i);}
}
    if(rat.size()!=0){
    for(int i=0;i<rat.size();i++)
       cout<<s1[rat[i]]<<endl;
}
 
   if(women.size()!=0){
   for(int i=0;i<women.size();i++)
    cout<<s1[women[i]]<<endl;
}
 
if(men.size()!=0){
for(int i=0;i<men.size();i++)
    cout<<s1[men[i]]<<endl;
}
if(cap.size()!=0)
cout<<s1[cap[0]];
}