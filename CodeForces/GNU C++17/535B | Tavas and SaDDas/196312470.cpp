#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
vector<ll>v;
ll solve(ll n){
    v.push_back(n);
    if(n>1e10)
        return 0 ;
    solve(n*10 +4);
    solve(n*10 +7);
}
void RunCase(){
ll n;
cin >> n;
    solve(0);
    sort(all(v));
    cout << lower_bound(all(v),n) - v.begin() << el;
}
int main(){
    HereWeGo();
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    int t = 1;
    //cin >> t;
    while(t--)
       RunCase();
}
 