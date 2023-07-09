#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll MOD = 1000000007;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
void RunCase(){
int n,k;
cin >> n >> k;
map<int,pair<int,int>>mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(mp.count(x)==0){
            mp[x].first = i;
            mp[x].second=i;
        }
        else{
            mp[x].second = i;
        }
    }
    while (k--){
        int l,r;
        cin >> l >> r;
        if(mp.find(l) == mp.end() || mp.find(r) == mp.end()) { cout << "NO\n"; continue;}
        else if( mp[l].first > mp[r].second)
            cout<<"NO\n";
        else
            cout<<"YES\n";
 
    }
 
}
int main() {
 
   int t = 1;
   cin >> t;
    while (t--)
        RunCase();
}
 