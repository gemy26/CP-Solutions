#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
bool check(string s){
    for (int i = 1; i < s.size() ; ++i) {
        if(s[i]==s[i-1]){return true;}
 
    }
    return false;
}
int main(){
    HereWeGo();
int t;
cin >> t;
 
    while (t--){
        int n;
        int m;
        cin >> n >> m;
        int cnt= 0;
        bool f=false;
        int l=1,r=50;
        while (n--){
            int x,y;
            cin >> x >> y;
            if(x<=m&&y>=m){
                l=max(l,x);
                r=min(r,y);
            }
        }
        if(l==r){cout<<"YES\n";}
        else
            cout<<"NO\n";
 
    }
 
}
 