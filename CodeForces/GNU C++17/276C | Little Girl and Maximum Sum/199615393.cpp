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
int n,q;
cin >> n >> q;
vector<ll>v(n+1);
vector<ll>a(n+1,0);
    for (int i = 1; i < n+1 ; ++i) {
        cin >> v[i];
    }
    while (q--)
    {
        ll l,r;
        cin >> l >> r;
        a[l-1]++;
        a[r]--;
    }
    for (int i = 1; i < n+1; ++i) {
        a[i]+=a[i-1];
    }
    sort(all(a));
    sort(all(v));
    ll sum=0;
    for (int i = 1; i < n+1 ; ++i) {
        sum += (a[i]*v[i]);
    }
    cout<<sum;
}
int main() {
 
   int t = 1;
   //   cin >> t;
    while (t--)
        RunCase();
}
 