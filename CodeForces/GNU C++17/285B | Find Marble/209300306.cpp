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
int n,s,p;
int cnt=0;
cin >> n >> s >> p;
if(s==p){
    return void(cout<<0<<el);
}
map<int,int>mp;
vector<int>v(n+1);
    for (int i = 1; i <= n ; ++i) {
        int x;
        cin >> x;
        mp[i] = x;
    }
 
    for (int i = 1; i <= n ; ++i) {
 
        s=mp[s];
        if(s==p){
            return void(cout<<i);
        }
 
    }
cout<<-1;
 
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