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
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            a[i]+=(i+1);
        }
        sort(a,a+n);
 
        ll i=0,cnt=0;
        while(k>=a[i]&&i<n){
           k-=a[i]; i++;cnt++;
        }
        cout<<cnt<<el;
    }
 
}
 