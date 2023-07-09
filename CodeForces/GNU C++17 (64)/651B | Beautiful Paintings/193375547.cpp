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
    int n;
    cin >> n;
    map<int,int>mp;
    int x;
    int cnt  =0;
    for (int i = 0; i < n ; ++i) {
      cin >> x;
      mp[x]++;
    }
    int sum = 0;
int loop = 0;
for(auto i : mp){
    loop = max(loop,i.second);
}
    while (loop--){
        cnt  = 0;
        for(auto &i : mp){
            if(i.second){
                cnt++;
                i.second--;
            }
        }
        sum += (cnt-1);
    }
    cout << sum;
}
 