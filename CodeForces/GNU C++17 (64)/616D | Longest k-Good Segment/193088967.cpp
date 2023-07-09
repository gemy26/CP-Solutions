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
 
    int n,k,res=0;
    cin >> n >> k;
    vector<int>v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int L,R;
    map<int,int>mp;
    int l=0,r=0;
    for (int i = 0; i < n; ++i)
    {
        mp[v[i]]++;
 
        while(mp.size() > k && l<n){
            mp[v[l]]--;
            if(mp[v[l]] == 0){mp.erase(v[l]);}
            l++;
        }
        if(i-l+1 > res){
            L=i,R=l;
            res = i-l+1;
        }
 
    }
    cout<<R+1<<' '<<L+1;
}
 