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
string s,t;
int p1=0,p2=0;
int cnt=0;
int r=0;
int solve(int i=0  ,int sc=0){
if(i == s.size()) {
    r++;
    return sc == p1;
}
    int res=0;
 
if(t[i] == '?')
{
      res+=solve(i+1,sc+1) ;
      res+=solve(i+1,sc-1) ;
 
}
else {
    res += solve(i + 1, t[i] == '+' ? sc + 1 : sc - 1);
}
return res;
}
int main() {
    HereWeGo();
cin >> s >> t;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == '+')
            p1++;
        else p1--;
    }
if(!count(all(s),'?') && !count (all(t),'?')){
 
 
    for (int i = 0; i < t.size() ; ++i) {
        if(t[i] == '+')
            p2++;
        else
            p2--;
    }
    if(p1 == p2){
        cout<<"1.000000000000\n";
        return 0;
    }
    else
    {
        cout<<"0.000000000000\n";
        return 0;
    }
}
   //cout<< setprecision(10)<<((double)cnt/(double)solve())*1.0<<el;
 
    int c = solve();
//cout<<c<<' '<<r;
cout<< fixed<<setprecision(10)<<(double)((double)c/1.0 / (double)r/1.0)/1.00000000000;
}
ll FastPow(ll n , ll x , ll res=1){
    if(n <= 0)
        return res;
    else{
        if(n%2==1)
            res=((res%MOD)*(x%MOD))%MOD;
        x=((x%MOD)*(x%MOD))%MOD;
        n/=2;
        return FastPow(n,x%MOD,res);
    }
}