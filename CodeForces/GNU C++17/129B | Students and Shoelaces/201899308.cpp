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
int n,m;
vector<set<int>>G(n+2);
vector<int>connect(105);
vector<int>rem;
set<int>::iterator it ;
 
void RunCase(){
cin >> n >> m;
G.resize(n+2);
    for (int i = 0; i < m ; ++i) {
        int u,v;
        cin >> u >> v;
        G[u].insert(v);
        G[v].insert(u);
 
    }
    int cnt=0;
    while (true){
        rem.clear();
        for (int i = 1; i <= n ; ++i) {
            if(G[i].size() == 1)
                rem.push_back(i);
        }
      if(rem.size())
          cnt++;
      else if(rem.size()==0)
          break;
 
          for(auto i : rem){
              it = G[i].begin();
              G[i].clear();
              G[*it].erase(i);
 
 
      }
 
 
      }
cout<<cnt;
 
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
 
}
 