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
    int x,y;
    int maxx = 0;
    int minx = 0;
    int maxy = 0;
    int miny = 0;
 
    while(n--){
 
    cin >> x >> y;
    maxx = max(maxx,x);
    maxy = max(maxy,y);
    minx = min(minx,x);
    miny = min(miny,y);
}
 
x = abs(maxx)+abs(maxy);
y = abs(minx)+abs(miny);
cout<<(x+y)*2<<el;
//cout<<maxx<<" "<<maxy<<" "<<minx<<" "<<miny<<el;
 
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