#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
void RunCase(){
 
int n;
cin >> n;
map<int,vector<int>>mp;
    for (int i = 0; i < n*2 ; ++i) {
        int x;
         cin >> x;
         mp[x].push_back(i+1);
    }
   for(auto i : mp){
      if(i.second.size() %2 !=0){cout<<-1<<el;
          return;}
   }
for(auto i : mp){
    for(auto j : i.second)
        cout<<j<<' ';
    cout<<el;
}
 
}
int main(){
    HereWeGo();
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
//    int t;
//    cin >> t;
//    t--;
//    while (t--)
       RunCase();
 
 
 
 
}
 