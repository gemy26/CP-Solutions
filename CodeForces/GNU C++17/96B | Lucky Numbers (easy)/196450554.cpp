#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
vector<ll>v;
void getlucky(ll l ,int f,int s){
     if(l>1e10)
         return;
     if(s==f)
         v.push_back(l);
    getlucky(l*10 +4,f+1,s);
    getlucky(l*10 +7,f,s+1);
}
 
void RunCase(){
  ll n;
  cin >> n;
  sort(all(v));
    getlucky(0,0,0);
    sort(all(v));
   cout<<*lower_bound(all(v),n);
}
int main(){
    HereWeGo();
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    int t = 1;
    //cin >> t;
    while(t--)
       RunCase();
}
 