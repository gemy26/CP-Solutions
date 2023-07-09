 
 
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
 
 
 
 
 
 
 
 
void RunCase() {
 
 int p,q,l,r;
 cin >> p >> q >> l >> r;
 vector<pii>v(p);
 vector<pii>A(q);
 int valid[10000]={0};
 int cnt=0;
    for (int i = 0; i < p; ++i) {
        cin >>v[i].first >> v[i].second;
        valid[v[i].first]=1;
        valid[v[i].second+1]=-1;
    }
    for (int i = 1; i < 1002 ; ++i) {
        valid[i]+=valid[i-1];
       // cout<<valid[i]<<' ';
    }
 
 
    for (int i = 0; i < q; ++i) {
        cin >>A[i].first >> A[i].second;
    }
//
//
    for (int i = l; i <= r ; ++i) {
        for (int j = 0; j < q ; ++j) {
            bool v = 1;
            int x=i+A[j].first,y=i+A[j].second;
            for (int k = x; k <= y ; ++k) {
                if(valid[k]){
                    cnt++;
                    v=0;
                    break;
                }
            }
            if(!v)break;
        }
    }
    cout<<cnt;
 
 
 
}
 
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}