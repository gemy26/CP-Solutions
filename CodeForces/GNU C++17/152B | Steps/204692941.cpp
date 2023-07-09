#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
//bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
bool cmp(const string& a,const string& b){return a.size() < b.size();}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
const int maxn = 1e5;
vector<vector<pii>>G; // {node,cost}
vector<int>parent(maxn);
vector<ll>costs(maxn+1,INF);
//vector<bool>vis(maxn,false);
 
//void dij(int src){
//
//    priority_queue<pii,vector<pii>,greater<pii>>q;
//
//    //set<pll>s; // {cost,node}
//    // s.insert({0,src});
//    q.push({0,src});
//    costs[src]=0;
//    parent[src]=-1;
//    while (!q.empty()){
//
//
//        ll cost = q.top().first;
//        int node = q.top().second;
//        q.pop();
//
//        if(cost > costs[node])
//            continue;
//
//        for(auto child : G[node]){
//            if(costs[child.first] > costs[node]+child.second){
//                q.push({child.second+ costs[node],child.first});
//                parent[child.first] = node;
//                costs[child.first] = costs[node]+child.second;
//            }
//        }
//
//    }
//
//}
ll n,m;
ll ini_x,ini_y;
int k;
vector<pair<ll,ll>>v;
 
 
bool valid(ll mid,ll x,ll y){
 
x*=mid;
y*=mid;
return (ini_x+x >0 && ini_x+x <=n && ini_y+y > 0 && ini_y+y <= m);
}
 
 
 
void RunCase() {
 
cin >> n >> m;
 
cin >> ini_x >> ini_y;
 
cin >> k;
    for (int i = 0; i < k ; ++i) {
        int q,w;
        cin >> q >> w;
        v.pb({q,w});
        //cin >> v[i].first >> v[i].second;
    }
 
 
 
 
    ll ans=0;
    for (int i = 0; i < k ; ++i) {
        ll l=-1,r=1e9+1;
        ll mid;
        while (r>l+1){
            mid = (l+r+1)/2;
            if(valid(mid,v[i].first,v[i].second)){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        if(valid(l,v[i].first,v[i].second)){
            ans+=l;
            ini_x += (l*v[i].first);
            ini_y += (l*v[i].second);
        }
    }
 
cout<<ans;
 
 
 
 
 
 
 
 
}
 
 
 
int main(){
    HereWeGo();
    int t = 1;
   //  cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
        RunCase();
    }
    return 0;
 
}