#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll MOD = 1000000007;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
void RunCase(){
int n;
cin >> n;
set<string>st;
vector<string>A(n);
map<string,int>mp;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        mp[A[i]]=i;
        st.insert(A[i]);
    }
 
    for (int i = 0; i < n ; ++i) {
        if(A[i].size() == 1){
            cout<<0;
            continue;
        }
        bool ok = false;
        for (int j = 1; j <A[i].size() && !ok; ++j) {
            if(st.count(A[i].substr(0,j)) && st.count(A[i].substr(j))){
                cout<<1;
                ok  = true;
            }
        }
        if(!ok){
            cout<<0;
        }
 
    }
    cout<<el;
 
 
 
 
}
int main() {
 
   int t = 1;
   cin >> t;
    while (t--)
        RunCase();
}
 