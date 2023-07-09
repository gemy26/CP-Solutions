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
int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
int n,m,k;
const int  MAXN = 2003;
vector<vector<int>>G(1e5+5);
//vector<int>dis(1e5+5,-1);
vector<pii>par(1e5+5);
bool vis[MAXN][MAXN];
int dis[MAXN][MAXN];
 
 
 
void RunCase(){
    cin >> n >> m >> k;
    //memset(dis,-1,sizeof dis);
 
    queue<pii>q;
    while (k--){
        int xi,yi;
        cin >> xi >> yi;
        q.push({xi,yi});
        vis[xi][yi] = 1;
        dis[xi][yi] = 0;
    }
    int maxcost = -1;
 
 
    while (!q.empty()){
        pii node;
        node = q.front();
        q.pop();
        int x,y;
        x = node.first,y=node.second;
        int cost = dis[x][y];
        //if(vis[x][y] == 1)continue;
 
        for (int i = 0; i < 4 ; ++i) {
            int xi,yi;
            xi = x+dx[i], yi = y+dy[i];
            if(xi>=1 && yi >=1 && xi <= n && yi <= m && !vis[xi][yi]){
                q.push({xi,yi});
                vis[xi][yi] = 1;
                dis[xi][yi] = dis[x][y]+1;
            }
 
        }
    }
 
    int rx=1,ry=1;
    for (int i = 1; i <= n ; ++i) {
        for (int j = 1; j <= m ; ++j) {
            if(dis[i][j] > dis[rx][ry]){rx=i,ry=j;}
        }
    }
 
//cout<<maxcost<<el;
cout<<rx<<" "<<ry<<el;
}
 
int main(){
    HereWeGo();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
        RunCase();
    }
    return 0;
 
}