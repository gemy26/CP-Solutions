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
bool cmp(const vector<vector<pii>>& a,const vector<vector<pii>>& b){return a.size() < b.size();}
const int  MAXN = 1000;
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
int n,m;
    int c=0;
    vector<pair<int,vector<pii>>>vv;
    vector<pii>temp;
bool vis[MAXN][MAXN];
vector<string>G(MAXN);
bool inborder(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m   );
}
bool isvalid(int i,int j){
    return (i==0||j==0||i==n-1||j==m-1);
}
bool check(int i , int j){
    if(i < 0 || i > n || j < 0 || j > m   || G[i][j]=='*' || G[i][j]=='#' ) return false;
    return true;
}
 
 
    //int parent[MAXN];
 
 
 
 
    void  dfs(int i,int j){
    if(!check(i,j) || vis[i][j])
        return;
            vis[i][j] = 1;
        for (int k = 0; k < 4 ; ++k) {
            int x = i+dx[k],y=j+dy[k];
                dfs(x,y);
        }
    }
 
vector<pii>res;
vector<vector<pii>>comp;
void dfs2(int i , int j){
    if(!check(i,j) || vis[i][j])
        return;
    temp.pb({i,j});
    c++;
    vis[i][j]=1;
    for (int k = 0; k < 4 ; ++k) {
        int x = i+dx[k],y=j+dy[k];
       dfs2(x, y);
    }
 
}
 
 
 
 
 
 
 
 
void RunCase(){
        int k;
 cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> G[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m ; ++j) {
            if(( i==0||i==n-1||j==0||j==m-1) && G[i][j]=='.'){
                    dfs(i,j);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m ; ++j) {
           if(vis[i][j]){
               G[i][j]='#';
            }
        }
    }
//    for (int i = 0; i < n ; ++i) {
//        cout << G[i] << el;
//    }
    memset(vis,0,sizeof vis);
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m ; ++j) {
            if(!vis[i][j] && G[i][j]=='.'){
                temp.clear();
                c=0;
                dfs2(i,j);
                //comp.pb(res);
                vv.pb({c,temp});
                cnt++;
            }
 
        }
    }
   // cout<<cnt<<el;
//    int c=0;
 
    sort(all(vv));
    int sz=vv.size();
    int ans=0;
    for (int i = 0; i < sz-k ; ++i) {
        ans+=vv[i].first;
        for(auto j : vv[i].second){
            G[j.first][j.second]='*';
    }
            //cout<<el;
        //vv.erase(o);
 
 
 
}
 
 
//    for (int i = 0; i < ; ++i) {
//
//    }
//    for(auto i : comp)
//            for(auto j : i)
//             cout<<j.first<<j.second<<el;
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m ; ++j) {
            if( G[i][j]=='#'){
                G[i][j]='.';
            }
        }
    }
    cout<<ans<<el;
    for (int i = 0; i < n ; ++i) {
        cout << G[i] << el;
    }
 
 
 
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
    return 0;
 
}