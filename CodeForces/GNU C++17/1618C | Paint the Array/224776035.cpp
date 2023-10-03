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
 
void RunCase() {
 
  int n;
  cin >> n;
  vector<ll>v(n);
  for(int i=0;i<n;i++)cin >> v[i];
ll ev=v[0];
ll od=v[1];
 for(int i=0;i<n;i+=2){
     ev = __gcd(ev,v[i]);
 }
 
    for(int i=1;i<n;i+=2){
        od = __gcd(od,v[i]);
    }
//cout<<ev<<" "<<od<<el;
//    if(ev == od ){
//        cout<<0<<el;
//        return;
//    }
bool odd=false,even=false;
    for(int i=0;i<n;i+=2){
        if(v[i]%od == 0){
            even = true;
        }
    }
//
    for(int i=1;i<n;i+=2){
        if(v[i]%ev == 0){
           odd = true;
        }
    }
//
//
if(even && odd){
    cout<<0<<el;
}
else if(odd && !even){
    cout<<od<<el;
}
else{
    cout<<ev<<el;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t ; ++i) {
//        cout<<"Case #"<<i+1<<":";
        RunCase();
 
    }
 
 
 
 
 
 
 
}