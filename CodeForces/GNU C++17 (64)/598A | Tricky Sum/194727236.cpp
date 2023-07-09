#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int main() {
    HereWeGo();
int t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll sum = (n*(n+1))/2;
    //cout<<sum<<el;
 
    for (int i = 1; i <= n ; i*=2)
    {
       sum-=(i*2);
    }
    cout<<sum<<el;
}
 
    }
 
 
 