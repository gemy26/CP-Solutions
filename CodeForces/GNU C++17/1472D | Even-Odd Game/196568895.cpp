#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.rbegin(),x.rend()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    HereWeGo();
    int t;
    cin >> t;
    while(t--){
        int n;
     cin >> n;
     vector<int>v(n);
     for(auto &i : v)
        cin >> i;
    sort(all(v));
    ll ans = 0;
        ll ans1 = 0;
 
    for (int i = 0; i < n; ++i)
    {
        if(i%2==0&&v[i]%2==0)
            ans+=v[i];
        else if(i%2==1&&v[i]%2==1)
            ans1+=v[i];
 
    }
    if(ans==ans1)
        cout<<"Tie\n";
    else if(ans>ans1)
        cout<<"Alice\n";
    else
        cout<<"Bob\n";
    
    }
     
   
     
}
 