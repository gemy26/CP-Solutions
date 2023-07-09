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
    while(t--){
        string s;
        cin >> s;
        map<char,int>mp;
        int l=0,r=0;
        int n;
        n = s.size();
        ll res  = INF;
 
        for (int i = 0; i < n ; ++i) {
            mp[s[i]]++;
            while (mp['1']&&mp['2']&&mp['3'] && l<n){
                mp[s[l]]--;
                if(mp[s[l]]==0)
                    mp.erase(s[l]);
                res = min(res,(ll)i-l+1);
                l++;
            }
 
        }
        if(res == INF)
            cout<<0<<el;
        else
        cout<<res<<el;
    }
 
 
 
 
    
 
}
 