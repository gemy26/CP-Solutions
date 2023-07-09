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
 
void setIO(string name = "") {
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
 
bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if (a.second < b.second){
        return true;
    }
    return false;
}
 
 
//bool cmp(const vector<int>&a,const vector<int>&b){return b[1] > a[1];}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
 
 
 
 
void RunCase() {
   string s;
   cin >> s;
   map<char,int>mp;
   int cnt=0;
    for (int i = 0; i < s.size() ; ++i) {
        mp[s[i]]++;
        if(mp[s[i]] == 2){
            cnt+=2;
            mp.clear();
        }
    }
    cout<<s.size()-cnt<<el;
 
}
 
 
 
 
 
/*
 
 
 
 
1 1 1 3 4 5 6
 s.size()>max_frq
 cout<<max_frq
 
 
 
 
 
*/
 
 
 
 
int main(){
    HereWeGo();
//    setIO(NULL);
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}