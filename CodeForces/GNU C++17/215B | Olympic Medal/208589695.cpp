 
 
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
int n;
cin >> n;
int max_ra = 0;
    for (int i = 0; i < n ; ++i) {
        int x;
        cin >> x;
        max_ra  = max(max_ra,x);
    }
    int max_pa=0;
    int m;
    cin >> m;
    for (int i = 0; i < m ; ++i) {
        int y;
        cin >> y;
        max_pa = max(max_pa,y);
    }
    int k;
    cin >> k;
    int min_pb=99999999;
    for (int i = 0; i < k ; ++i) {
        int z;
        cin >> z;
        min_pb=min(min_pb,z);
    }
    int a,b;
    cin>>a>>b;
    double high = (b*max_pa*pow(max_ra,2));
    double low = a*min_pb + b*max_pa;
    cout<<fixed<<setprecision(20    )<<(double)sqrt(high/low);
    //cout<<max_pa;
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