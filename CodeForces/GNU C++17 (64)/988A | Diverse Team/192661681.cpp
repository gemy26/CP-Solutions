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
  map<int,int>mp;
    for (int i = 0; i < n ; ++i) {
        int x;
        cin>>x;
        mp[x]=i+1;
    }
    if(mp.size()>=k){
        cout<<"YES\n";
      auto it =mp.begin();
      int i=0;
        while (i<k){
            cout<<it->second<<' ';
            it++;
            i++;
        }
    }
    else
        cout<<"NO";
}