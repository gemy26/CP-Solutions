#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(const pair<ll, ll>& a,const pair<ll, ll>& b){return a.second > b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
int main(){
    HereWeGo();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int x;
        map<int,int>mp;
        for (int i = 0; i < n ; ++i) {
            cin >> x;
            mp[x]++;
        }
       priority_queue<int>pq;
        for(auto i : mp){
            pq.push(i.second);
        }
        int cnt  = 0;
        int i = 0;
        
        while (pq.size() > 1){
            int f = pq.top();
            pq.pop();
            int s = pq.top();
            pq.pop();
            f--;
            s--;
            cnt++;
            if(f)
           pq.push(f);
            if(s)
                pq.push(s);
        }
cout<<n-(cnt*2)<<el;
 
    }
}
 