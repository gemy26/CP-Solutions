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
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &i : v)cin >> i;
    int l=1,r=n-2;
    ll a=v[0],b=v[n-1];
    while (r>=l){
        if(a<=b){a+=v[l];l++;}
        else if(b<=a){b+=v[r];r--;}
 
 
    }
    cout<<l<<' '<<n-l;
 
}
 