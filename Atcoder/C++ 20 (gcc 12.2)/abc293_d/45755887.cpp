#include<bits/stdc++.h>



using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()


const ll  mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N=2e5+1;

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
 bool vis[N];
 bool vis2[N];
 vector<vector<int>>G;
 vector<vector<int>>comp;
 vector<int>tmp;
int cnt = 0;
void dfs(int node){
    if(vis[node])return;
    vis[node] = true;
    tmp.pb(node);
    for(auto i : G[node]){
        if(!vis[i]){
            dfs(i);
        }
    }
}

void dfs2(int node){
    if(vis2[node]){return;}
    vis2[node] = true;
    for(auto i : G[node]){
        if(!vis2[i]){
            dfs2(i);
        }
    }
}

int deg[N];
void RunCase() {
cin >> n >> m;
G.resize(n+1);
memset(vis,false,sizeof(vis));
while(m--){
    int u,v;
    char c,cc;
    cin >> u >> c  >> v >> cc;
    G[u].pb(v);
    G[v].pb(u);
    deg[u]++;
    deg[v]++;
}

for(int i = 1 ; i <= n; i++){
    if(!vis[i]){
        tmp.clear();
        dfs(i);
        cnt++;
        comp.pb(tmp);

    }
}

    int x=0,y=0;
//cout<<comp.size()<<el;
for(auto i : comp){
    bool f = true;
    for(auto j : i){
        if(deg[j] != 2){f = false;}
    }
    if(f){
        x++;
    }
    else{
        y++;
    }

}

    cout<<x<<" "<<y<<el;








    
}


















int main(){
    HereWeGo();
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t = 1;
//    cin >> t;
    for (int i = 0; i < t ; ++i) {
        RunCase();

    }







}

