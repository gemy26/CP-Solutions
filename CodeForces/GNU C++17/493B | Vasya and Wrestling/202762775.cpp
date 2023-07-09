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
const int  MAXN = 100005;
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
int n,m;
    map<int,int>cost;
    vector<vector<int>>G(MAXN);
    //vector<int>parent(MAXN);
    int parent[MAXN];
    vector<int>ans;
    bool vis[MAXN];
 bool cycle = false;
 int cycle_start,cycle_end ;
    void  dfs(int node, int par=-1){
        parent[node] = par;
        vis[node] = true;
 
 
        for(auto child : G[node]){
            if(par == child) continue;
            if(vis[child]){
                int u = node;
                while (node ^ child){
                    ans.pb(node);
                    node = parent[node];
                    node = parent[child];
                }
                ans.pb(child);
                ans.pb(u);
                cout<<ans.size()<<el;
                for(auto i : ans)
                    cout<<i<<" ";
                exit(0);
            }
            else{
                dfs(child,node);
            }
 
        }
    }
 
 
 
 
 
 
 
 
 
 
void RunCase(){
   cin >> n;
   vector<int>f,s;
   int last;
    while (n--){
        int x;
        cin >> x;
        if(x >= 0)
            f.pb(abs(x)),last=1;
        else
            s.pb(abs(x)),last=2;
    }
    ll cntf=0,cnts=0;
 
    for (int i = 0; i < f.size() ; ++i) {
        cntf+=f[i];
    }
    for (int i = 0; i < s.size() ; ++i) {
        cnts+=abs(s[i]);
    }
    if(cntf > cnts)
        cout<<"first\n";
    else if(cnts > cntf )
        cout<<"second\n";
    else{
        for (int i = 0; i < min(f.size(),s.size()) ; ++i) {
               if(f[i] > s[i]){cout<<"first\n"; return ;}
               else if(s[i] > f[i]){cout<<"second\n"; return;}
        }
       if(last == 2){cout<<"second";}
       else
           cout<<"first";
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