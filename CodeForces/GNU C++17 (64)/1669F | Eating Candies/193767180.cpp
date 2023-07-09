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
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i: v)cin >> i;
        ll a = 0, b = 0;
        int l = 0, r = n - 1, cnt = 0, s = 0;
 
        while (r >= l) {
 
 
            if (a < b) {
                a += v[l];
                l++;
            } else if (b < a) {
                b += v[r];
                r--;
            } else {
                a += v[l];
                l++;
            }
            if (a == b && a && b) cnt = l, s = (n - r - 1);
        }
        cout << cnt + s<<el;
    }
 
}
 