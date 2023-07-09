#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
//bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
bool cmp(const string& a,const string& b){return a.size() < b.size();}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
map<string,vector<string>>G;
map<string,bool>vis;
int c=0;
int res=0;
 
void dfs(string  node, int cnt){
    res=max(res,cnt);
 
    //vis[node] = 1;
    for(auto child : G[node])
    {
        //if(!vis[child])
            dfs(child,cnt+1);
    }
 
 
}
 
 
 
void RunCase(){
int n;
cin >> n;
string from,to,re,f;
    for (int i = 0; i < n; ++i) {
        cin >> from>>re>>to;
 
        for(auto &i : from)
            i= tolower(i);
        for(auto &i : to)
            i= tolower(i);
 
         G[from].push_back(to);
    }
   for(auto i : G)
   {
       dfs(i.first,1);
 
   }
cout<<res;
}
 
int main(){
    HereWeGo();
 
    int t = 1;
   // cin >> t;
    for (int i = 0; i < t; ++i) {
        //cout<<"Case #:"<<i+1<<el;
        RunCase();
 
         }
}
 