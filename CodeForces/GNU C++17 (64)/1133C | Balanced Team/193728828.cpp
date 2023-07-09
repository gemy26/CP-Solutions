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
bool samesign(ll x){
    if(x > 0)
        return 1;
    else
        return 0;
}
 
int main(){
    HereWeGo();
    int n,k;
    cin >> n ;
    int l=0,r=0;
    int res=1;
    int cnt=0;
    vector<int>v(n);
    for(auto &i : v)cin >>i;
    sort(all(v));
    map<int,int>mp;
    while (r<n&&l<n){
        if(v[r]-v[l]<=5&& r<n) {
            r++;
            cnt++;
            res =  max(res,cnt);
        }
        else {
                cnt--;
                l++;
        }
    }
cout<<res;
 
}
 