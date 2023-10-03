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
ll n,k,x;
vector<ll>v;
    bool check(int z, int y){
        int l=z,r=y+1;
        while(r > l+1){
            int mid  = (l+r)/2;
            if(mid - z <= x && y-mid <= x ){
                return true;
            }
            if(mid - z > x ){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        return false;
    }
void RunCase() {
 
 
  cin >> n >> k >> x;
  v.resize(n);
  vector<ll>dif;
 
  for(int i=0;i<n;i++) cin >> v[i];
  sort(all(v));
 
  for(int i=1;i<n;i++){
      if(v[i]-v[i-1] > x)dif.pb(v[i]-v[i-1]);
  }
  ll cnt = 0;
  sort(all(dif));
  for(int i=0;i<dif.size();i++ ){
//      if(v[i] - v[i-1] > x ){
//         if(((v[i] - v[i-1]) / x )-1  <=  k  && (v[i]-v[i-1])%x==0 ){
//             k -= ((v[i] - v[i-1]) / x)-1;
//         }
//         else if(((v[i] - v[i-1]) / x )-1  <=  k  && (v[i]-v[i-1])%x!=0){
//             k -= ((v[i] - v[i-1]) / x);
//         }
//          else{
//              cnt++;
//          }
//      }
if(dif[i]/x -1 <= k && k && dif[i]%x == 0){
     k -= (dif[i]/x)-1;
}
else if(   dif[i]/x  <= k  && k && dif[i]%x != 0 ){
     k -= (dif[i]/x);
}
else{
    cnt++;
}
 
  }
  cout<<cnt+1<<el;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t = 1;
//    cin >> t;
    for (int i = 0; i < t ; ++i) {
//        cout<<"Case #"<<i+1<<":";
        RunCase();
 
    }
 
 
 
 
 
 
 
}