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
 
ll x;
cin >> x;
if(x%2 == 0  || (x%10)%2==0){
    return void(cout<<0<<el);
}
else if(x < 10 && x%2==1){
    return void(cout<<-1<<el);
}
 
else{
    string s = to_string(x);
    if((s[0]-'0' )% 2 == 0){
        return void(cout<<1<<el);
    }
    reverse(s.begin(),s.end());
    bool f= 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if((s[i]-'0')%2 == 0){
            f=1;
            return void(cout<<2<<el);
        }
        
    }
    if(!f){
        return void(cout<<-1<<el);
    }
}
 
 
}
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
//    freopen("mountains.in", "r", stdin);
//    freopen("mountains.out", "w", stdout);
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}