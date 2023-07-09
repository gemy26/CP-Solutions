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
ll n,l,r,x;
int cnt=0;
vector<ll>v;
void solve(int index,ll sum,ll mn , ll mx){
    if (n == index){
        if(sum >= l && sum <= r && mx-mn >= x)
            cnt++;
        
            return;
 
    }
    solve(index+1,sum+v[index],min(mn,v[index]),max(mx,v[index]));
    solve(index+1,sum,mn,mx);
}
int main(){
    HereWeGo();
cin >> n >> l >> r >> x;
v.resize(n);
for(auto &i : v)
    cin >> i;
    solve(0,0,INF,0);
cout<<cnt<<el;
 
 
 
 
 
 
}
 