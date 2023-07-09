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
    cin >>t;
    while(t--){
        int n; cin>>n;
 
 
        vector<ll>v(n);
 
        ll sum=0;
 
        ll cnt=0;
 
        for(int i=0; i<n; i++){
 
            cin>>v[i];
 
            sum+=abs(v[i]);
 
            if(v[i]<0)
                cnt++;
 
        }
 
            for (int i = 0; i < n; i++){
                if(v[i]<0) {
                    v[i] = abs(v[i]);
                }
            }
 
 
        if(cnt%2==0){
 
            cout<<sum<<endl;
 
 
        }
else{
            ll mn= *min_element(v.begin(),v.end());
 
            cout<<sum-2*mn<<endl;
}
 
 
    }
 
 
}
 