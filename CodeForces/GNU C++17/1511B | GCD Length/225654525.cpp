#include<bits/stdc++.h>
using namespace std;
 
 
 
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if(a.first == b.first)
        return a.second > b.second;
 
    return a.first < b.first;
}
 
 
//bool cmp(const string& a,const string& b){return a+b < b+a;}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
 
 
 
void RunCase() {
 
int n,m,k;
cin >> n >> m >> k;
if( n == m && m == k){
    string s = "1";
    for (int i = 1; i < k  ; ++i) {
        s += "0";
    }
    cout<<s<<" "<<s<<el;
 
}
else{
    string s = "1";
    string t = "1";
//    cout<<1;
    for (int i = 1; i < n ; ++i) {
        s+= "0";
    }
    for (int i = 1; i < m ; ++i) {
        t+= "0";
    }
    for (int i = 0; i < m-k+1 ; ++i) {
        t[i] = '1';
    }
 
 
    cout<<s<<" "<<t<<el;
}
//cout<<__gcd(100000,100010);
 
 
}
 
 
 
 
int main(){
    HereWeGo();
//    freopen("moocast.in", "r", stdin);
//    freopen("moocast.out", "w", stdout);
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
 
    }
    return 0;
 
}