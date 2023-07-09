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
 
 
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
 
    if(k==0){
        if(v[0]>1)
        cout<<v[0]-1;
        else
            cout<<-1;
        return 0;
    }
    int x = *max_element(v.begin(),v.begin()+k);
    for (int i = k; i < n ; ++i) {
        if(v[i] <= x) {
            cout << -1;
            return 0;
        }
    }
    cout<<x;
 
 
}