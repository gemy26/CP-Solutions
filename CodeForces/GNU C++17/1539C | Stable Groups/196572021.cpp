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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    HereWeGo();
   
        ll n,s,k;
    cin >> n >> s>> k;
    vector<ll>v(n);
    for(auto &i: v)
        cin >> i;
    sort(all(v));
    vector<ll>dif;
    for (int i = 1; i < n; ++i)
    {
        if(v[i]-v[i-1] > k)
        dif.push_back(v[i]-v[i-1]);
    }
    sort(all(dif));
    int cnt=0;
    for (int i = 0; i < dif.size(); ++i)
    {
         if(dif[i]/k -1 <= s && s && dif[i]%k==0)
          {  s-= dif[i]/k -1;continue;}
        else  if(dif[i]/k  <= s && s && dif[i]%k!=0)
           { s-= dif[i]/k;continue ;}
        
            cnt++;
    }
    cout<<cnt+1<<el;
 
    
    
     
}
 