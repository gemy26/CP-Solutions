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
 
int n,k;
 
vector<ll>v;
    ll max_sum=0;
 
bool valid(ll m){
 
 
 
}
 
void RunCase() {
   int n;
   cin >> n;
 
   bool o= false,z= false;
   vector<int>v(n);
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
        if(v[i])
            o= true;
 
    }
 
 
    if( (!o)){
        return void(cout<<0<<el);
    }
 
   ll cnt=1;
    for (int i = 0; i < n ; ++i) {
        if(v[i]) {
            for (int j = i + 1; j < n; ++j) {
                if (v[j]) {
                    cnt *= (j - i);
                    break;
                }
            }
 
        }
    }
    cout<<cnt<<el;
}
 
 
/*
 
 
 
 
 
 
*/
 
 
 
 
int main(){
    HereWeGo();
//    freopen("cardgame.in", "r", stdin);
//    freopen("cardgame.out", "w", stdout);
 
    int t = 1;
//    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}