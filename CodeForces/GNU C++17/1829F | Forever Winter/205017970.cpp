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
const int maxn = 1e3+2;
//vector<vector<pii>>G; // {node,cost}
//vector<int>parent(maxn);
//vector<ll>costs(maxn+1,INF);
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
 
int n,m;
vector<vector<int>>G;
bool vis[maxn][maxn]={0};
vector<int>temp;
vector<vector<int>>comp;
 
void dfs(int i ,int j){
    if(vis[i][j]){
        return;
    }
    temp.pb(G[i][j]);
    vis[i][j] = 1;
    for (int k = 0; k <4 ; ++k) {
        int x,y;
        x = dx[k]+i , y = dy[k]+j;
        if(x>=0&&y>=0&&x<n&&y<m && G[i][j]!=0){
            dfs(x,y);
        }
    }
}
 
void RunCase() {
    cin >> n >> m;
    G.resize(n+2);
    for (int i = 0; i < m ; ++i) {
        int u,v;
        cin >> u >> v;
        G[v].pb(u);
        G[u].pb(v);
    }
    for (int i = 1; i <=  n; ++i) {
        bool edge = false;
        for(auto u : G[i]){
            if(G[u].size() == 1) {edge=true;}}
 
        if(!edge && G[i].size() > 1){
            cout<<G[i].size()<<" ";
            cout<<G[G[i][0]].size()-1<<el;
            return;
        }
 
 
    }
 
 
/// i=15 u=3
 
 
 
 
 
}
 
 
 
int main(){
    HereWeGo();
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
        G.clear();
 
    }
    return 0;
 
}