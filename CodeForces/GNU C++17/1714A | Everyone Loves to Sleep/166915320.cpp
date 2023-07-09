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
   
int t; cin>>t;
while(t--){
int  n;
cin>>n; 
n+=1; 
vector<pair<int,int>>v(n);
for (int i = 0; i < n; ++i)
{
    cin>>v[i].first>>v[i].second;
}
int stand = v[0].first*60 + v[0].second;
int tmp = 1000000000;
for (int i = 1; i < n; ++i)
{
    if(v[i].first*60 + v[i].second < stand)
    tmp = min(tmp,((v[i].first)*60 + v[i].second)+1440);
else
    tmp = min(tmp,(v[i].first*60 + v[i].second));
 
}
cout<<abs(tmp-stand)/60<<' '<<abs(tmp-stand)%60<<el;
 
}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 