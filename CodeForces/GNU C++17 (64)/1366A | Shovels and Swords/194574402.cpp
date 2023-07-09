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
    int a,b;
cin >> a >> b;
if(a==0||b==0){cout<<0<<el; continue;}
if(a >= 2*b || b >= 2*a){cout<<min(a,b)<<el; continue;}
else{
    cout<<(a+b)/3<<el;
}
}
 
   
 
}
 