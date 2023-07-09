#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(const pair<ll, ll>& a,const pair<ll, ll>& b){return a.second > b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
bool samesign(ll x){
    if(x > 0)
        return 1;
    else
        return 0;
}
 
int main(){
    HereWeGo();
    ll n,d;
    cin >> n >> d;
    vector<pair<ll,ll>>vp(n);
    for(auto &i : vp)cin>>i.first>>i.second;
    sort(all(vp));
    ll l=0,r=0,res=0,cnt=0;
    while (l<n && r<n){
        if(vp[r].first-vp[l].first<d){
            cnt+=(vp[r].second);
            r++;
            res = max(res,cnt);
        }
        else{
            cnt-=vp[l].second;
            l++;
        }
    }
    cout<<res;
 
}
 