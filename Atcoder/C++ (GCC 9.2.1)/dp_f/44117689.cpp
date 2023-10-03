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
const int N=3002;

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



// base case : no path
// state: node
// transition : to the childs
int dp[N][N];
pair<int,int>construct[N][N];

string s,t;
int  solve(int i ,int j ){
if(i == s.size() || j == t.size())
    return 0;
if(dp[i][j] != -1)
    return dp[i][j];
if(s[i] == t[j]) {construct[i][j] = {i+1,j+1}; return dp[i][j] = 1 + solve(i + 1, j + 1); }

else{
    int mi= solve(i+1,j);

    int mj= solve(i,j+1);
    if(mi > mj){
        construct[i][j] = {i+1,j};
    }else{
        construct[i][j] = {i,j+1};
    }

    return dp[i][j]= max(mi,mj);
}




}
void RunCase() {
cin >> s >> t;
    memset(dp,-1,sizeof(dp));
pair<int,int>p = {0,0};
string res="";
solve(0,0);
    while (p.first < s.size() && p.second < t.size()){
        if(s[p.first ] == t[p.second])
            res+=s[p.first];
        p = construct[p.first][p.second];

    }
    cout<<res;


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