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
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int n,m;
const int  MAXN = 1e5+5;
vector<vector<int>>G(1e5+5);
vector<int>dis(1e5+5,-1);
vector<int>par(1e5+5,-1);
bool vis[MAXN];
void BFS(int src){
 
        queue<int>q;
        q.push(src);
        par[src] = src;
        dis[src] = 0;
        vis[src] = 1;
        while (!q.empty()){
            int node = q.front();
            q.pop();
            //vis[node] = 1;
            int cost = dis[node];
            for(auto child : G[node]){
                if(!vis[child]){
                    dis[child] = cost+1;
                    par[child] = node;
                    q.push(child);
                    vis[child] = 1;
                }
            }
        }
 
 
}
int res=0;
void dfs(int src){
vis[src] = 1;
for(auto child : G[src] ){
    if(!vis[child]){
        vis[child]=1;
        dfs(child);
        res++;
    }
}
}
 
 
 
void RunCase(){
cin >> n >> m;
if(n==1) {
    cout << 1;
    return ;
}
 
    for (int i = 0; i < m; ++i) {
        int u,v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
 
    for (int i = 1; i <= n ; ++i) {
        if(!vis[i]){
            dfs(i);
        }
    }
 
cout<<(ll)pow(2,res);
 
}
 
int main(){
    HereWeGo();
    //freopen("test_input.txt","r",stdin);
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
        RunCase();
    }
 
}