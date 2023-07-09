#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll MOD = 1000000007;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
void RunCase(){
ll n,k;
cin >> n >> k;
if(k == 1) { cout << 1; return ;}
if(k <= (n+1)/2)
    cout<<k+(k-1);
    else
        cout<<(k-((n+1 )/ 2)) *2;
 
}
int main() {
 
   int t = 1;
   //cin >> t;
    while (t--)
        RunCase();
}
 