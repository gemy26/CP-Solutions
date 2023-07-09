#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
int main(){
HereWeGo();
int n;
string s;
cin>>n>>s;
set<char>st;
    for (int i = 0; i < n ; ++i) {
        st.insert(s[i]);
    }
    int x= st.size();
    map<char,int>mp;
    int j  = 0;
    ll res = INF;
    for (int i = 0; i < n; ++i) {
 
        while (j<n&&mp.size()<x){
            mp[s[j]]++;
            j++;
        }
        if(mp.size()==x)
        res=min(res,(ll)j-i);
        mp[s[i]]--;
        if(mp[s[i]]==0){
            mp.erase(s[i]);
        }
    }
    cout<<res;
}
 