#include<bits/stdc++.h>



using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()


const int  mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N=1e6+2;

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


 ll dp[N][4];
int a[N];
int b[N];
int c[N];
// base case : i == n
// state: last color and index
// transition : if color 1 -> goto color 2 or 3 and so on..
int n;

ll solve(int i ,int last ){
    if(i >= n)
        return 0;
    ll &res = dp[i][last];
    if(res != -1)
        return res;
res = -1e18;
    if(last != 0)
        res= max(res,a[i]+solve(i+1,0));
    if(last != 1)
        res = max(res,b[i] +solve(i+1,1));
    if(last != 2)
        res = max(res, c[i]+solve(i+1,2));

    return  res;


}
void RunCase() {

cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }

    memset(dp,-1,sizeof(dp));
    cout<<solve(0,3);


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

        RunCase();




    }
    return 0;

}