#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
ll n,m;
ll solve(ll cnt ,ll val){
 
    int res;
    if(val == m)
        return cnt;
     if(val>m)
        return -1;
 
         return (max(solve(cnt+1,val*2),solve(cnt+1,val*3)));
    //return res;
}
 
 
void RunCase(){
    cin >> n >> m;
    cout<<solve(0,n);
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
//    cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 