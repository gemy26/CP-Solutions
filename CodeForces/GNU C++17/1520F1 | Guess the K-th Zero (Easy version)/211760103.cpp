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
 
 
 
 
 
//even-odd = odd
//odd - odd = even
 
void RunCase() {
 
    int n,t,k;
    cin >>n >>t;
    cin >> k;
     int l=0,r=n+1;
    while (r > l+1){
        int mid = (l+r)/2;
 
        cout<<"?"<<1<<' '<<mid<<el;
        cout.flush();
        int s;
        cin >> s;
        s=mid-s;
        if(s >= k){
           r=mid;
 
        }else{
            l=mid;
 
        }
    }
    cout<<"!"<<' '<<r<<el;
 
 
 
 
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