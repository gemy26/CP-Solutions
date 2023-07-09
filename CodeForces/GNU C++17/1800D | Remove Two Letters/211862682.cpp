#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
//bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
bool cmp(const string& a,const string& b){return a.size() < b.size();}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
 
void RunCase(){
// int n;
// cin >> n;
// vector<int>v(n);
// for (int i = 0; i < n; ++i)
// {
//     /* code */
//     cin >> v[i];
// }
// int cnt=0;
// int sum=0;
// bool f = false;
// for (int i = 0; i < n; ++i)
// {
//     /* code */
//     if(v[i] <0 && !f ){
//          f = true;
//          cnt++;
//     }
//     if(f && v[i]<=0){
//         sum+=abs(v[i]);
//     }
//     else{
//         f = false;
//         sum+=abs(v[i]);
//     }
// }
// cout<<sum<<" "<<cnt<<el;
 
//     int n;
//     cin >> n;
//     vector<int>v(n);
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> v[i];
//         /* code */
//     }
//     sort(all(v));
//     ll sum=0;
//     for (int i = 0; i < n/2; ++i)
//     {
//         /* code */
//         sum+=(v[n-i-1]-v[i]);
//     }
// cout<<sum<<el;
 
 
    // ll n;
    // cin >> n;
    // ll sum=0;
    // while(n){
    //     sum+=n;
    //     n/=2;
    // }
    // cout<<sum<<el;
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res=n-1;
    for (int i = 1; i < n-1; ++i)
    {
        if(s[i-1] == s[i+1]){
            res--;
        }
    }
    cout<<res<<el;
}
 
int main(){
    HereWeGo();
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
 
}