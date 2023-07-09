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
 
 int flag=0;
 if(s.size()==1)
    {
        if(s=="a"||s=="e"||s=="i"||s=="o"||s=="u"||s=="n"){cout<<"YES"; return 0;}
        else
            {cout<<"NO"; return 0;}
    }
    //if((s[0]=='a'|| s[0]=='e' || s[0]=='i'||s[0]=='o'||s[0]=='u'||s[0]=='n')) {cout<<"NO"; return 0;}
for(int i=0;i<s.size()-1;i++)
{
    if(s[i]!='a'&& s[i]!='e' && s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n')
    {
         if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
             flag=1;
         else if(s[i+1]!='a'||s[i+1]!='e'||s[i+1]!='i'||s[i+1]!='o'||s[i+1]!='u'){cout<<"NO"; return 0;}
    }
    
}
//cout<<flag;
int last=s.size()-1;
if(s[last]!='a'&&s[last]!='e'&&s[last]!='i'&&s[last]!='o'&&s[last]!='u'&&s[last]!='n'){cout<<"NO"; return 0;}
cout<<"YES";
}