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
string s;
int solve(int i=0 , int f=0 , int sec=0){
    //base
    if(i == 10 || f-sec > (10-i +1)/2 || sec-f > (10-i)/2 )
        return i;
    if(s[i] == '?')
        return min(solve(i+1,(i&1?f:f+1),(i&1?sec+1:sec)),solve(i+1,f,sec));
 
    return solve(i+1,(i&1||s[i]!='1'?f:f+1),(i&1 && s[i]=='1')?sec+1:sec);
 
}
int main() {
    HereWeGo();
    int t;
    cin >> t;
    while (t--){
       cin >> s;
 
        cout<<solve()<<el;
 
    }
 
}