#include <bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
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
//--------GCD---------------//
 
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
int n,s;
vector<ll>a;
vector<ll>p;
//ll sum = 0;
//ll a[n+5],p[n+5]={0};
ll check(ll m){
    
    ll sum  = 0;
    for (int i = 1; i <= n ; ++i)
    {
        p[i]=(a[i] + (m*i));
    }
    sort(p.begin(),p.end());
    for (int i = 1; i <= m  ; ++i)
    {
        sum += p[i];
        
    }
    return sum;
 
           
}
 
int main() {
   cin>>n>>s;
   a.resize(n+1);
   p.resize(n+1);
   for (int i = 1; i <= n; ++i)
   {
       cin >> a[i];
   }
   if(n==1){
    if(a[1]+1 <= s){
        cout<<1<<' '<<a[1]+1; 
        return 0;
    }
        else
cout<<0<<' '<<0; return 0;
}
   ll l=0,r=n+1,m;
   bool ok = false;
   while(r > l+1){
    m = (l+r)/2;
    if(check(m) <= s){l = m; ok = true;}
    else
        r = m;
   }
   //if(!ok){cout<<0<<' '<<0; return 0 ;}
   cout<<l<<' '<<check(l);
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 