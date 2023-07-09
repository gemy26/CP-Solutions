#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
void RunCase(){
  int n;
  cin >> n;
  vector<ll>A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    ll mn = *min_element(all(A));
 
    for (int i = 0; i < n; ++i) {
        A[i]-=mn;
    }
    //sort(all(A));
    ll x=0;
    for (int i = 0; i < n ; ++i) {
        x = __gcd(x,A[i]);
    }
if(x == 0){cout<<-1<<el;}
else
    cout<<x<<el;
 
 
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 