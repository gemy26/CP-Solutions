#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<int, int>& a,pair<int, int>& b){
    if(a.first != b.first)return a.first >= b.first;
return a.second<b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int main() {
    HereWeGo();
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>>v(n);
    map<pair<int,int>,int>mp;
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
        mp[{v[i]}]++;
    }
 
    sort(all(v),cmp);
 
//for(auto i : v)
//    cout<<i.first<<' '<<i.second<<el;
//cout<<el<<el;
    cout<<mp[v[k-1]];
 
}
 
 
 
 
 
 
 
 