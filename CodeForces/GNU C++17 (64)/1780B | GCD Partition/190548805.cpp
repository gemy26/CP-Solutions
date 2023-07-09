#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; ++i)
        {
            /* code */
            cin>>v[i];
        }
        vector<ll>prefix(n),suffix(n);
        prefix[0]=v[0];
        suffix[n-1]=v[n-1];
        for (int i = 1; i < n; ++i)
            prefix[i]=prefix[i-1]+v[i];
 
        for (int i = n-2; i >= 0; --i)
            suffix[i]=suffix[i+1]+v[i];
        ll res=0;
        for (int i = 0; i < n-1; ++i)
        {
            res = max(res,__gcd(prefix[i],suffix[i+1]));
        }
        cout<<res<<el;
 
 
 
 
 
 
    }
}
 