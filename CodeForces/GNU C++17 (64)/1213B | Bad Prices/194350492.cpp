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
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin >> v[i];
    }
    int mn = 1e8 ;
    int cnt=0;
    for (int i = n-1; i >= 0 ; --i)
    {
        if(v[i] > mn)
            cnt++;
        else
        mn = v[i];
    }
    cout<<cnt<<el;
 
}
 
 
 
 
   
 
}
 