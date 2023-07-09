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
int a[5];
 bool solve(int res,int pos){
 
     if(pos == 5 )
         return (23 == res);
     return solve(res+a[pos],pos+1)||
     solve(res-a[pos],pos+1)||
     solve(res*a[pos],pos+1);
 }
 bool read(){
     for (int i = 0; i < 5; ++i)
     {
         cin >> a[i];
     }
     return true;
 }
 bool notzero(){
     for (int i = 0; i < 5; ++i)
     {
         if(a[i] == 0)
             return false;
     }
     return true;
 }
int main(){
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("outputt.txt", "w", stdout);
//    #endif
    HereWeGo();
 
    ll n,k;
    cin >> n >> k;
    vector<ll>divisors;
    for (ll i = 1; i*i <= n; ++i)
    {
        if(n%i == 0){
 
            if(n/i != i)
                divisors.push_back(n/i);
            divisors.push_back(i);
        }
 
    }
    sort(all(divisors));
   if(divisors.size() < k)
       cout<<-1<<el;
   else
    cout<<divisors[k-1]<<el;
 
 
 
 
 
 
}