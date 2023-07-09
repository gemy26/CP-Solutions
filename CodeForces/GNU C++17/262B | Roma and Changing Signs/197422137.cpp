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
    HereWeGo();
   int n,k;
   cin >> n >>k;
   vector<int>v(n);
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
    }
 
    for (int i = 0; i < n ; ++i) {
        if(!k)
            break;
        if(v[i]<0 && k ) { v[i] = abs(v[i]); k--;}
 
    }
    ll sum =0;
    sort(all(v));
    if(k){
        if(k%2!=0 ){
            v[0]*=-1;
        }
    }
    for (int i = 0; i < n; ++i) {
        sum += v[i];
    }
cout<<sum;
 
}