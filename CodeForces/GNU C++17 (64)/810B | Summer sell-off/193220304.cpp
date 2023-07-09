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
double c,t;
 
int main(){
 
    HereWeGo();
 
 
  int f,n;
  cin >> n >> f;
  vector<pair<int,int>>A(n),B(n);
  vector<int>k(n),l(n);
    for (int i = 0; i < n ; ++i) {
        cin >> k[i] >> l[i];
        int m = min(2*k[i],l[i])-min(k[i],l[i]);
        B[i]={m,i};
    }
 
    sort(B.rbegin(),B.rend());
 
    ll s=0;
    for (int i = 0; i < f ; ++i) {
        int x = B[i].second;
        s += min(2*k[x],l[x]);
    }
    for (int i = f; i < n ; ++i) {
        int x = B[i].second;
 
        s += min(k[x],l[x]);
    }
cout<<s;
}
 