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
 
 
int main(){
    HereWeGo();
 
 int t;
 cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,ll>mp;
        ll cnt  = 0;
        for (int i = 0; i < n ; ++i) {
            cin >> v[i];
            v[i]-=i;
            cnt += mp[v[i]];
            mp[v[i]]++;
        }
 
        cout<<cnt<<el;
    }
 
}
 