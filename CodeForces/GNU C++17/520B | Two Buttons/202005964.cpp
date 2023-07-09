#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
//bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
bool cmp(const string& a,const string& b){return a.size() < b.size();}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
ll n,m;
 
bool vis[100000];
int dis[200000];
 
void BFS(int src){
    memset(dis,0,sizeof dis);
    int cnt=0;
    dis[src]=0;
    queue<ll>q;
    q.push(src);
    while (!q.empty()){
       int node = q.front();
       q.pop();
        int cost = dis[node];
        if(node == m){cout<<dis[node]<<el; return;}
       ll d=node-1;
       if(!dis[d] && node-1 > 0 ){q.push(d); dis[d]=cost+1;}
       d= node*2;
       if(d < 2e5 && !dis[d]){q.push(d); dis[d]=cost+1;}
    }
 
}
void RunCase(){
 
    cin >> n >> m;
 
    BFS(n);
    //cout<<cnt;
 
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
 
}