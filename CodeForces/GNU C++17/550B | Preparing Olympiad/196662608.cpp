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
   int n,l,r,x;
    cin>>n>>l>>r>>x;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int cnt = 0;
     for(int mask = 0; mask < (1 << n);mask++)
     {
        int sum =0,larg = -1e9, small = 1e9;
        for (int i = 0; i < n; ++i)
        {
            if((mask>>i)&1)
            {
                sum+=a[i];
                larg = max(larg,a[i]);
                small = min(small,a[i]);
            }
        }
 
          if(sum >= l && sum <= r && larg-small >= x)
            cnt++;
        }
 
  cout<<cnt;
 
     
}
 