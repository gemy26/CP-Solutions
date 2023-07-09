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
 
 
 
void RunCase() {
int k,t;
cin >> n >> m;
cin >> k >> t;
int size = n*m +2;
vector<int>A(k);
//vector<int>D(size,0);
 
    for (int i = 0; i < k ; ++i) {
        int u,v;
        cin >> u >> v;
       int idx = (u-1)*m + (v);
 
//       D[idx]=1;
       A[i] = idx;
    }
 
sort(all(A));
 
 
    for (int i = 0; i < t ; ++i) {
        int u,v;
        cin >> u >> v;
        int idx = v + (u-1)*m ;
        int c  = lower_bound(all(A),idx) - A.begin();
        c = min(c,k);
        if(A[c] == idx){
            cout<<"Waste\n";
        }else{
            int pos = idx-c;
           if(pos %3  == 1){
               cout<<"Carrots\n";
           }
           else if(pos %3  == 2){
               cout<<"Kiwis\n";
           }else{
               cout<<"Grapes\n";
           }
 
        }
    }
//    cout<<el<<el;
//    for (int i = 0; i < n*m ; ++i) {
//        cout<<A[i]<<" ";
//    }
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