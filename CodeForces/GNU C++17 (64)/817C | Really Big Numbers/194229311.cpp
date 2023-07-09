#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
ll n,x;
ll l,r,m;
bool good(ll mid){
 
        ll sum = 0;
        ll temp = mid;
        while (mid != 0) {
            sum = sum + mid % 10;
            mid =mid / 10;
        }
 
    return temp-sum>=x;
 
}
int main(){
    HereWeGo();
 
 
   cin >> n >> x;
   l=0,r=n+1;
    while (r > l+1){
        m = (l+r)/2;
        if(good(m))
            r = m;
        else
            l = m;
    }
   cout<<n-l;
 
 
 
 
}
 