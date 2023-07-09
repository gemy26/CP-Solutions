#include <bits/stdc++.h>
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
 
bool palindrome(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p)
        return true;
    else
        return false;
}
 
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
 
int main()
{
    fast_cin();
   int t;
   cin>>t;
   while(t--){
    int n,m;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for (int i = 0; i < m; ++i)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int x=a[n-1],y=b[m-1];
    if(x>=y){cout<<"Alice"<<el;}
    else
        cout<<"Bob"<<el;
    if(y>=x)
        cout<<"Bob"<<el;
    else
        cout<<"Alice"<<el;
   }
}