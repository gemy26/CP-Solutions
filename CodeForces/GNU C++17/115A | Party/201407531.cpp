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
 
int G[2003];
 
void RunCase(){
int n;
cin >> n;
 
    for (int i = 0; i < n ; ++i) {
        int x;
        cin >> x;
        if(x!=-1){--x;}
        G[i] = x;
        //cout<<0;
    }
    //cout<<"1";
   int cnt=0;
    for (int i = 0; i < n ; ++i) {
        int depth = 0;
        int cur = i;
        //cout<<2;
        while (G[cur] != -1) {
        depth++;
        cur = G[cur];
       // cout<<3;
        }
        //cout<<4;
        cnt = max(cnt,depth);
    }
    cout<<++cnt;
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 