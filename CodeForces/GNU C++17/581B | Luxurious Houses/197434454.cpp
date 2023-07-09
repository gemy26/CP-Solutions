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
 
int main() {
    HereWeGo();
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
    }
 
vector<int>res;
    int max_h=-1;
 
    for (int i = n-1; i >= 0  ; --i) {
      //max_h = max(max_h,v[i]);
      if(v[i] > max_h) {
          max_h = v[i];
          res.push_back(0);
      }
     else
         res.push_back(max_h+1-v[i] );
    }
    for (int i = n-1; i >= 0  ; --i)
        cout<<res[i]<<' ';
 
}