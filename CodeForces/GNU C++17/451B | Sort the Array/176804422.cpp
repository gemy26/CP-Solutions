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
int main() {
    fast_cin();
   int n;
   cin>>n;
   vector<int>a(n),b(n);
   //int a[n],b[n];
    for (int i = 0; i < n ; ++i) {cin>> a[i]; b[i]=a[i];}
     sort(b.begin(),b.end());
 
    int x,y;
    int cnt = 0;
    for (int i = 0; i < n ; ++i) {
        if(a[i] != b[i])
        {
            y = i;
            cnt++;
            if(cnt == 1){
                x=i;
            }
            //cout<<a[i]<<' '<<b[i]<<el;
        }
    }
    //cout<<x<<y;
    if(!cnt) {
        cout<<"yes"<<el;
        cout << 1 << ' ' << 1;
        return 0;
    }
    reverse(a.begin()+x,a.begin()+y+1);
 
    for (int i = 0; i < n; ++i) {
        if(a[i] != b[i])
        {
            cout<<"no"<<el;
            return 0;
        }
    }
 
   cout<<"yes"<<el;
    cout<<x+1<<' '<<y+1<<el;
 
}