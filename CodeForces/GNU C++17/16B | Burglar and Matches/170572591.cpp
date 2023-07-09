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
    int n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v;
    for (int i = 0; i < m ; ++i) {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(), sortbysecdesc);
    ll i=0,sum=0,cnt=0,f_cnt=0,sp_case=0;
    for (int j = 0; j < m; ++j) {
        f_cnt+=v[j].first;
        sp_case+=(v[j].first * v[j].second);
    }
    if(f_cnt<n)
    {
        cout<<sp_case; return 0;
    }
    while(n>cnt)
    {
        if(v[i].first<=n-cnt) {
            sum += (v[i].first * v[i].second);
            cnt += v[i].first;
        }
        else
        {
            sum += (abs(n-cnt) * v[i].second);
            cnt +=abs( n-cnt);
        }
 
        i++;
    }
    cout<<sum;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 