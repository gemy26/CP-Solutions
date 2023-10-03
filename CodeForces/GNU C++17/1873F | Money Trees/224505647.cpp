#include<bits/stdc++.h>
 
 
 
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()
 
 
const ll  mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N=2e5+1;
 
void setIO(string name = "") {
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
 
bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if (a.first  == b.first){return a.second < b.second;}
    return a.first > b.first;
}
 
 
//bool valid(int i,int j){
//    return i >= 0 && i < n && j >= 0 && j < m;
//}
 
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
 
void RunCase() {
 
 
 int n,k;
 cin >> n >> k;
 vector<int>A(n);
 vector<int>p(n,0);
 vector<int>h(n);
 for(int i=0;i<n;i++){
     cin >> A[i];
 }
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    p[0] = A[0];
    for(int i=1;i<n;i++){
        p[i] += A[i-1];
    }
 
//    int l=0,r=0;
//    ll sum = A[0];
//    int res = 0 ;
//    for(int i=1;i<n;i++){
//        if(h[i-1]%h[i] == 0 ){
//             r++;
//            sum += (A[i]);
//            if(sum <= k){
//                res = max(res,r-l+1);
//            }
//            else{
//                while(sum > k && l <= r){
//                    sum -= A[l];
//                    l++;
//                }
//            }
//        }
//        else{
//            if(sum <= k){
//                res = max(res,r-l+1);
//            }
//            l = 0;
//            r=0;
//            sum = A[i];
//
//        }
//
//    }
//
//    if(sum <= k){
//        res = max(res,r-l+1);
//    }
//    cout<<res<<el;
 
int res=0;
    ll sum=0;
int l=0,r=0;
while(r < n){
    if(l == r){
        sum += A[r];
        r++;
    }
    else if( h[r-1] % h[r] == 0){
        sum += A[r];
        r++;
    }
    else{
        l = r;
        sum = 0;
    }
    while( sum > k){
        sum -= A[l];
        l++;
    }
    res = max(res,r-l);
}
cout<<res<<el;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t ; ++i) {
        RunCase();
 
    }
 
 
 
 
 
 
 
}