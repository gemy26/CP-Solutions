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
    vector<int>v(n+2);
    for(auto & i : v)
        cin >> i;
    sort(all(v));
    int l=0,r=n-1;
    ll sum = 0;
    for (int i = 0; i < n+2 ; ++i) {
       sum += v[i];
    }
 
    int index = -1;
    if((sum - v[n+1] - v[n]  )== v[n] || sum-v[n] == v[n+1]  ){
        for (int i = 0; i <  n ; ++i) {
            cout<<v[i]<<' ';
        }
        cout<<el;
        //cout<<"here";
        continue;
    }
 
    else{
        for (int i = 0; i < n+1 ; ++i) {
            if(sum-v[n+1]-v[i] == v[n+1]){
                index = i;
                break;
            }
        }
    }
    if(index != -1){
        for (int i = 0; i < index ; ++i) {
            cout<<v[i] << ' ';
        }
        for (int i = index+1; i < n+1 ; ++i) {
            cout<<v[i]<<' ';
        }
        cout<<el;
    }
    else
        cout<<-1<<el;
 
}
 
 
}