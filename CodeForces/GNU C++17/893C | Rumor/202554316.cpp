#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
//bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
bool cmp(const string& a,const string& b){return a.size() < b.size();}
const int  MAXN = 100005;
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
int n,m;
    map<int,int>cost;
    vector<vector<int>>G(MAXN);
    bool vis[MAXN];
 
    ll dfs(int node){
        vis[node] = true;
        ll mini = cost[node];
        for(auto child : G[node]){
            if(!vis[child]){
                mini = min(mini,dfs(child));
            }
        }
        return mini;
    }
 
 
 
 
 
 
void RunCase(){
    cin >> n >> m;
    memset(vis,false, sizeof vis);
    for (int i = 0; i < n ; ++i) {
        int x;
        cin >> x;
        cost[i+1] = x;
    }
    for (int i = 1; i <= m ; ++i) {
           int u,v;
           cin >> u >> v;
           G[u].pb(v);
           G[v].pb(u);
    }
    ll res=0;
 
    int cot=0;
    int cnt=0;
    for (auto i : cost) {
        if(!vis[i.first]){
            res +=  dfs(i.first);
            cnt++;
        }
 
    }
    //cout<<cnt;
cout<<res<<el;
}
 
int main(){
    HereWeGo();
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
        RunCase();
    }
    return 0;
 
}