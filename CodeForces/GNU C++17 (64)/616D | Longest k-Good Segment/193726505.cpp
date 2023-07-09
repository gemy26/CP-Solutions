#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(const pair<ll, ll>& a,const pair<ll, ll>& b){return a.second > b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
bool samesign(ll x){
    if(x > 0)
        return 1;
    else
        return 0;
}
 
int main(){
    HereWeGo();
    int n,k;
    cin >> n >> k;
    int l=0,r=0;
    int L=0,R=0;
    int res=0;
    vector<int>v(n);
    for(auto &i : v)cin >>i;
    map<int,int>mp;
    for (int i = 0; i < n ; ++i) {
        mp[v[i]]++;
        while (mp.size() > k && l < n ){
            mp[v[l]]--;
            if(mp[v[l]] == 0){
                mp.erase(v[l]);
            }
            l++;
        }
        if(i-l+1 > res){
            L=l,R=i;
            res = max(res,i-l+1);
        }
    }
    cout << L+1 << ' '<< R+1;
 
}
 