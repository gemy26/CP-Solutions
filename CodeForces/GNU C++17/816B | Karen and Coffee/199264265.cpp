#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
vector<ll>A(200000+5,0);
void RunCase(){
int n;
cin >> n;
vector<pair<ll,ll>>v;
ll l=INF,r=-INF;
    for (int i = 0; i < n ; ++i) {
        ll x,y;
        cin >> x >> y;
        v.push_back({x,y});
       l=min(l,x);
       r=max(r,y);
    }
   // sort(all(v));
    for (int i = 0; i < v.size() ; ++i) {
      if(l == v[i].first && r == v[i].second){cout<<i+1<<el; return ;}
    }
    return void(cout<<-1);
 
 
 
 
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 