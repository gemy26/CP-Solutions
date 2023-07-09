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
  int n,m,k;
  cin >> n >> m >> k;
  int ho[n+5];
  memset(ho, 0, sizeof(ho));
  vector<pii>v(k);
    for (int i = 0; i <  m; ++i) {
       int h;
       cin >> h;
       ho[h]=1;
    }
    int l=1;
    for (int i = 0; i < k ; ++i) {
        int u,v;
        cin >> u >> v;
        if(!ho[l]){
            if(l==u)
                l=v;
            else if(l == v){
                l=u;
            }
        }else{
            return void(cout<<l<<el);
        }
    }
cout<<l;
 
 
}
 
 
 
 
 
 
 
 
 
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