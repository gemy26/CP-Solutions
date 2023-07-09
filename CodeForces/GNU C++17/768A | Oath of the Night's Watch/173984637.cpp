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
 
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
int lowerthan(int a[],int val,int n){
    int l=-1;int r=n;
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
int main() {
    fast_cin();
   int n;
   cin>>n;
   ll a[n];
    for (int i = 0; i < n ; ++i) {
        cin>>a[i];
    }
    int cnt = 0;
    sort(a,a+n);
int max=a[n-1];
int min=a[0];
 
 
       for (int i = 0; i < n ; ++i) {
          if(a[i]!=min&&a[i]!=max)
              cnt++;
       }
 
cout<<cnt;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 