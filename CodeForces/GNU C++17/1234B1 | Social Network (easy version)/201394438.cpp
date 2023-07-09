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
set<int>s;
queue<int>q;
    for (int i = 0; i < n ; ++i) {
        int x;
        cin >> x;
 
//        if(s.count(x) == 0 && dq.size() >= k){ s.erase(dq[0]); dq.pop_front();dq.push_front(x); s.insert(x); }
//        else if(s.count(x) == 0 && dq.size() < k){dq.push_front(x);s.insert(x);}
//        else if(s.count(x) == 1  ){continue;}
if(s.count(x) == 0){
    if(q.size() >= k){int y = q.front(); q.pop(); q.push(x); s.insert(x);s.erase(y);continue;}
    else if(q.size() < k ){q.push(x); s.insert(x);}
}
else
    continue;
 
    }
    cout<<q.size()<<el;
   vector<int>v;
    while (!q.empty()){
        int x = q.front();
        v.push_back(x);
        q.pop();
    }
    reverse(all(v));
    for(auto i : v)
        cout<<i <<" ";
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 