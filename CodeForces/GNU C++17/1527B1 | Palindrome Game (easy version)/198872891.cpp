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
 
int main() {
    HereWeGo();
    int t;
    cin >> t;
    while(t--){
       int n;
       string s;
       cin >> n >> s;
       int z = count(all(s),'0');
       if(z == 1 || z%2==0)
           cout<<"BOB\n";
       else
           cout<<"ALICE\n";
    }
 
}