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
int n,m,x;
 
//int mn = 1e6;
vector<pair<int,int>>sh;
ll  distance(int x1, int y1, int x2, int y2)
{
 
    return (ll) (pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int checkdis(pair<int,int>p){
    bool checknear = false;
    bool checkfar = false;
    for (int k = 0; k < sh.size() ; ++k) {
 
        int dis = distance(p.first,p.second,sh[k].first,sh[k].second);
        if(dis <= x*x){
            return dis;
        }
    }
    return 1e7;
}
 
 
 
 
void RunCase() {
 
    cin >> n >> m >> x;
    string s;
    int count =0;
    vector<string>A;
    set<char>st;
 
 
    for (int i = 0; i < n ; ++i) {
        cin >> s;
        A.pb(s);
        st.insert(all(s));
    }
    map<char,vector<pii>>mp;
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            // mp[A[i][j]]={i,j};
            if(A[i][j] == 'S' ){
                sh.pb({i,j});
            }else{
                mp[A[i][j]].pb({i,j});
            }
        }
    }
 
 
    if(mp.size()==0){
        return void(cout<<-1);
    }
 
    map<char,ll>value;
 
 
    int q;
    cin >> q;
    string t;
    cin >> t;
 
//    for (auto c : mp[tolower[] ) {
//        for(auto l : sh){
//            mn = min(mn, abs(distance(c.first,c.second,l.first,l.second)));
//        }
//
//    }
 
 
string alpa = "abcdefghijklmnopqrstuvwxyz";
for(auto c : alpa){
    ll mn=1e6;
    for (auto k : mp[c]){
        for(auto l : sh){
            mn = min(mn, distance(k.first,k.second,l.first,l.second));
        }
    }
    value[c] = mn;
}
 
 
    for (int i = 0; i < (int)t.size() ; ++i) {
        if(st.count(tolower(t[i])) == 0){
            return void (cout<<-1<<el);
        }
        if(!mp[tolower(t[i])].size() && isupper(t[i])){
            return void(cout<<-1);
        }
        if(  mp[tolower(t[i])].size()   &&   islower(t[i])  ){
            continue;
        }
        if(isupper(t[i]) && st.count('S')==0){ return void(cout<<-1<<el);}
        else{
            if(value[tolower(t[i])] > (ll)x*x && value[tolower(t[i])]!= 1e6){count++;}
            else if(value[tolower(t[i])] <= (ll)x*x && value[tolower(t[i])] != 1e6){ continue;}
            else{
                return void(cout<<-1<<el);
 
        }
 
//        if(isupper(t[i])) {
//          ll mn = INF;
//            for (auto c : mp[tolower(t[i])] ) {
//                for(auto l : sh){
//                    mn = min(mn, abs(distance(c.first,c.second,l.first,l.second)));
//                }
//            }
//
//            }
        }
 
    }
 
    cout<<count<<el;
 
 
}
 
 
 
/**
 * dis betwen 1,1 and 0,1
    (1-0)^2 + (1-1)^2 = 1 <= x ,x=1
 */
 
 
 
 
 
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