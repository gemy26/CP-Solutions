#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
int n;
vector<int>v;
map<int,int>mp;
void solve(int l ,int r , int dep ){
 if(l == r)
     return ;
  int mx = *max_element(v.begin()+l,v.begin()+r);
  int pos=0;
    for (int j = l; j < r ; ++j) {
        if(mx == v[j] ){
            mp[v[j]] = dep;
            pos = j;
            break;
        }
    }
    solve(l,pos,dep+1);
    solve(pos+1,r,dep+1);
 
 
}
int main(){
    HereWeGo();
int t;
cin >> t;
while(t--){
    cin >> n;
    v.resize(n);
    for(auto &i : v)
        cin >> i;
    solve(0,n,0);
    for (int i = 0; i < n; ++i) {
        cout<<mp[v[i]]<<' ';
    }
    cout<<el;
 
 
}
 
 
 
 
 
 
 
}
 