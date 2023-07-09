#include <bits/stdc++.h>
#include<string.h>
#define ll long long
#define el "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
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
// int gcd(int a, int b)
// {
//     return b == 0 ? a : gcd(b, a % b);   
// }
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
bool sortbyfirst(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.first<b.first;
}
int lowerthan(int a[],int val,int n){
    int l=0;int r=n-1;
    while(r>l+1){
        int mid = (l+r)/2;
        if(a[mid]<=val){l=mid;}
        else
            r=mid;
    }
    return l;
}
int higherthan(int a[],int val,int n){
    int l=-1,r=n;
    while(r>l+1){
        int mid=(l+r)/2;
        if(val<=a[mid]){r=mid;}
        else
            l=mid;
    }
    return r;
}
 
bool is(int n,int x,int y,int mid){
    if(mid<min(x,y)){return false;}
    mid-=min(x,y);
    return ((mid/x) + (mid/y) +1 >= n);
}
bool valid(double mid ,double c ){
    return (mid*mid + sqrt(mid) >= c);
}
bool check(int n)
{
    int sum = 0;
    while(n!=0)
    {
        int val = n % 10;
        sum += val;
        n /= 10;
    }
    return sum == 10;
}
bool isvalid(int x , int mid){
    return (mid*(mid+1)/2 >= x );
} 
bool hm(int a,int b, int c){
  if( (a-b == b-c) || (b-a == c-b)) return true;
  else
    return false;
}
bool comp(long a, long b) {
    return (-a < -b);
}
// 
int main() {
    fast_cin();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[1001];
        vector<int>v(1001);
        set<int>st;
        bool cc=false;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin>>x;
            v[x]=i;
            //if(gcd(b[i], b[i-1]) == 1) cc=true;
        }
        int res =-1;
        
        for (int i = 1; i<1001; ++i)
        {
            for (int j = 1; j < 1001; ++j)
            {
                if(__gcd(i,j)==1 &&v[i]&&v[j]){res=max(res,v[i]+v[j]); }
            }
        }
         cout<<res<<el;
}
 
}   