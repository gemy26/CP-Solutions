#include <bits/stdc++.h>
#include<string.h>
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
 
 
 
int main() {
    int t;
    cin>>t;
 
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n ; ++i) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int max1=v[n-1];
        int min1=v[0];
        int min2=v[1];
        int max2=v[n-2];
        cout<<abs( (max1-min1) + (max2-min2))<<el;
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 