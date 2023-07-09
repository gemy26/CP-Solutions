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
 
bool cmp(const pair<int, double>& a,const pair<int, double>& b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
//bool cmp(const string& a,const string& b){return a.size() < b.size();}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
 
 
 
void RunCase() {
int n;
cin >> n;
map<int,pii>mp;
map<int,set<int>>mps;
set<int>bl;
    for (int i = 0; i < n ; ++i) {
        int x;
        cin >> x;
       if(mp.count(x)==0 && bl.count(x)==0){
           mp[x]={i,i};
       }
 
       else{
 
              mp[x].first=mp[x].second; mp[x].second=i;
           mps[x].insert(mp[x].second-mp[x].first);
 
              if(mps[x].size()>1){
                  mp.erase(x);
                  mps.erase(x);
                  bl.insert(x);
              }
       }
        if(bl.count(x)){
            mp.erase(x);
            mps.erase(x);
        }
    }
    cout<<mp.size()<<el;
  for(auto i : mp){
      cout<<i.first <<' '<<i.second.second-i.second.first<<el;
  }
}
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
// freopen("maxcross.in", "r", stdin);
// freopen("maxcross.out", "w", stdout);
 
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}