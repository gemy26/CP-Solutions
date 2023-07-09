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
int a[5];
 bool solve(int res,int pos){
 
     if(pos == 5 )
         return (23 == res);
     return solve(res+a[pos],pos+1)||
     solve(res-a[pos],pos+1)||
     solve(res*a[pos],pos+1);
 }
 bool read(){
     for (int i = 0; i < 5; ++i)
     {
         cin >> a[i];
     }
     return true;
 }
 bool notzero(){
     for (int i = 0; i < 5; ++i)
     {
         if(a[i] == 0)
             return false;
     }
     return true;
 }
int main(){
    HereWeGo();
int n;
cin >> n;
vector<int>v(n);
    set<int>st;
for(auto & i : v) {
    cin >> i;
    st.insert(i);
}
sort(all(v));
 
    for (int i = 1; i <= v[0] ; ++i) {
        if(st.count(i) == 0){
            cout<<i<<el; return 0;
        }
    }
    for (int i = 1; i < n ; ++i) {
        if(v[i]-v[i-1] !=0){
            for (int j = v[i-1]+1; j <= v[i] ; ++j) {
                if(st.count(j) == 0){
                    cout<<j<<el;
                    return 0;
                }
            }
        }
    }
    cout<<v[n-1]+1<<el;
 
 
 
 
 
 
 
}