#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
//bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
bool cmp(const string& a,const string& b){return a.size() < b.size();}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
void RunCase(){
 int n,k;
 cin >> n >> k;
 vector<string>v(n);
 vector<int>A(n);
set<int>st;
string s;
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
        A[i] = v[i].size();
    }
    cin >> s;
    sort(all(A));
    int cnt = 0;
    bool f = true;
    int q=0;
int inc=0;
    int eq=0;
    for (int i = 0; i < n ; ++i) {
        inc++; cnt++;
        if(A[i] == s.size() && f){q=cnt; f = false;}
        if(A[i] == s.size()){eq = cnt;}
        if(inc % k == 0){cnt+=5;}
    }
    cout<<q<<" "<<eq;
}
//اللهم انى صاااائم
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 