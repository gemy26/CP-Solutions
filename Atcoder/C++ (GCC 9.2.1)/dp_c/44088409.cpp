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

void setIO(string name = "") {
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if (a.first  == b.first){return a.second < b.second;}
    return a.first > b.first;
}
//bool valid(int i,int j){
//    return i >= 0 && i < n && j >= 0 && j < m;
//}



int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
int n,m;
const int N=100000;
//vector<pair<int,char>> G[N];
//vector<vector<int>> gr;
//vector<int>c(N,-1);
//vector<char>v(N);
//vector<vector<char>>adj;
//bool vis[N];
bool ok=false;
int area=0;
int per=0;

vector<vector<char>>adj;
vector<vector<int>>G(N);

//void dfs(int x,int y) {
//     if(adj[x][y] == 'G') { cnt++; }
//    vis[x][y] = 1;
//    for (int i = 0; i < 4; ++i) {
//        int xi = x+dx[i];
//        int yi = y+dy[i];
//        if(valid(xi,yi) && !vis[xi][yi] && adj[xi][yi]!='#') { dfs(xi, yi); }
//    }
//}
//struct DSU{
//    int parent[N];
//    int GroupSize[N];
//
//    DSU(){
//        for (int i = 0; i < N; ++i) {
//            parent[i] = i;
//            GroupSize[i] = 1;
//        }
//    }
//
//    int FindLeader(int node){
//        if(parent[node] == node){return node;}
//
//        return parent[node] = FindLeader(parent[node]);
//
//    }
//
//    bool SameGroup(int x, int y){
//        int leaderx = FindLeader(x);
//        int leadery = FindLeader(y);
//        return leaderx == leadery;
//    }
//    void MergeGroups(int x, int y){
//        int leader1 = FindLeader(x);
//        int leader2 = FindLeader(y);
//
//        if(GroupSize[leader1] > GroupSize[leader2]){
//            parent[leader2] = leader1;
//            GroupSize[leader1] += GroupSize[leader2];
//        }
//        else if(GroupSize[leader1] < GroupSize[leader2]){
//            parent[leader1] = leader2;
//            GroupSize[leader2] += GroupSize[leader1];
//        }
//        else{
//            return;
//        }
//
//    }
//    int GetSize(int x){
//        int leader = FindLeader(x);
//        return GroupSize[leader];
//    }
//};
vector<pair<int,int>>v;
int w;
ll dp[101][N];
ll solve(int i,int rem){
    if(i == n)
        return 0;
    if(rem == 0)
        return 0;
    if(dp[i][rem] != -1)
        return dp[i][rem];
    ll res = solve(i+1,rem);
    if(rem >= v[i].first){
        res = max(res,v[i].second+solve(i+1,rem-v[i].first));
    }
    return dp[i][rem]=res ;
}
void RunCase() {

cin >> n;
v.resize(n);
cin >> w;
    for (int i = 0; i < n ; ++i) {
         cin >> v[i].first >> v[i].second;
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,w);








}



















int main(){
    HereWeGo();
//     setIO("perimeter");
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
//    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
//        adj.clear();
//        for (int j = 0; j < n ; ++j) {
//            adj[j].clear();
//        }
//        memset(vis,false,sizeof(vis));
        RunCase();



    }
    return 0;

}