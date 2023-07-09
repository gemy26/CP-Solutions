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
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    int k;
    cin>>k;
    for (int i = 0; i < n ; ++i) {
        cin>>v[i].first;
       v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    //cout<<v[0].first;
    vector<int>res;
    int cnt=v[0].first;
    int i=0;
    //cout<<v[0].first;
    for(int i=0 ;i<n;i++){
        if(v[i].first>k)break;
        else
        {
            k-=v[i].first;
            res.push_back(v[i].second);
        }
    }
    cout<<res.size()<<el;
    for(auto it : res)
        cout<<it<<' ';
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 