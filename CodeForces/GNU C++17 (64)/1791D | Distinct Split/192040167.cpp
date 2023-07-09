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
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        set<char>st;
 
        prefix[0] = 1;
        st.insert(s[0]);
        for (int i = 1; i < n; ++i) {
            if(st.count(s[i])==0){prefix[i]=prefix[i-1]+1,st.insert(s[i]);;}
            else{prefix[i]=prefix[i-1];}
 
        }
        st.clear();
        suffix[n-1]=1;
        st.insert(s[n-1]);
        for (int i = n-2; i >=0  ;--i) {
            if(st.count(s[i])==0){suffix[i]=suffix[i+1]+1,st.insert(s[i]);}
            else{suffix[i]=suffix[i+1];}
 
        }
 
        int res = 0;
        for (int i = 0; i < n-1 ; ++i) {
            res = max(res,prefix[i]+suffix[i+1]);
        }
        if(res > n ) {
            cout << n << el;
            continue;
        }
        else
            cout<<res<<el;
    }
 
 
}