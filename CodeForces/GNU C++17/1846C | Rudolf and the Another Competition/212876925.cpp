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
 
bool cmp(const pair<pair<int, int>,ll>& a,const pair<pair<int, int>,ll>& b){
    if ( a.first.second == b.first.second){if(a.second==b.second)return b.first.first>a.first.first; return b.second>a.second;}
    return a.first.second > b.first.second;
}
 
 
//bool cmp(const vector<int>&a,const vector<int>&b){return b[1] > a[1];}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
/*
 
 1 3 8 10 18 20 25
*/
//vector<string>v(3);
// bool check(char c){
//     int cnt=0;
//     int cnt2=0;
//     int cnt3=0;
//     for (int i = 0; i < 3 ; ++i) {
//         if(v[0][i] == c){
//             cnt++;
//         }
//         if(v[1][i] == c)
//             cnt2++;
//         if(v[2][i]==c)
//             cnt3++;
//
//     }
//     if(cnt == 3 || cnt2==3 || cnt3==3){
//         return 1;
//     }
//     int a=0,b=0,d=0;
//     for (int i = 0; i <  3; ++i) {
//         if(v[i][0] == c){
//            a++;
//         }
//         if(v[i][1] == c)
//            b++;
//         if(v[i][2]==c)
//             d++;
//     }
//     if(a==3 || b==3 || d==3){
//         return 1;
//     }
//     if((v[0][0] == c && v[1][1]== c && v[2][2] == c) || (v[0][2] == c && v[1][1] == c && v[2][0]==c)  ){
//         return 1;
//     }
//     return 0;
// }
//
 
void RunCase() {
 
 
//    for (int i = 0; i < 3; ++i) {
//        cin >> v[i];
//    }
//    if(check('+')){
//      cout<<"+"<<el;
//    }
//    else if(check('X')){
//        cout<<"X"<<el;
//    }
//    else if(check('O')){
//        return void(cout<<'O'<<el);
//    }else{
//        return void(cout<<"DRAW"<<el);
//    }
    ll n,m,h;
    cin >>n >> m >> h;
    vector<vector<ll>>v(n);
    vector<vector<ll>>A;
//    vector<vector<ll>>C(n);
    for (int i = 0; i < n ; ++i) {
        v[i].resize(m);
        for (int j = 0; j < m ; ++j) {
            cin >> v[i][j];
        }
        sort(all(v[i]));
    }
//    vector<int>A(n,0);
    vector<pair<pair<int,int>,ll>>B;
 
    for (int i = 0; i < n ; ++i) {
        vector<ll>pre(m);
        pre[0]=v[i][0];
 
        for (int j = 1; j < m ; ++j) {
            pre[j]  = pre[j-1]+v[i][j];
        }
        A.pb(pre);
    }
 
 
    for (int i = 0; i < n ; ++i) {
        ll sum=0;
        ll psum = 0;
        bool check  =false;
        for (int j = 0; j < m ; ++j) {
            if(sum+v[i][j] <= h){
                sum+=v[i][j];
                psum += A[i][j];
            }else{
                B.pb({{i,j},psum});
                check = true;
                break;
            }
        }
        if(!check){
            B.pb({{i,m},psum});
        }
    }
 
    pair<pair<int,int>,ll> tmp = B[0];
    sort(all(B),cmp);
//    cout<<tmp.first<<tmp.second<<el;
//for(auto i : B){
//    cout<<i.first<<' '<<i.second<<el;
//}
//cout<<el<<el;
//    for (int i = 0; i < n ; ++i) {
//        for (int j = 1; j < m ; ++j) {
//            v[i][j]+=v[i][j-1];
//        }
//    }
//    int cnt=0;
////    for (int i = 1; i < n; ++i) {
////        for (int j = 0; j < m ; ++j) {
////            if(v[i][tmp] <= h){
////
////            }
////            if(v[i][j] <= h &&   j <= tmp){
////                if(v[i][j] <= val){
////                    cnt++;
////                    break;
////                }
////            }
////        }
////    }
//    for (int i = 1; i < n ; ++i) {
//        if(A[i] > A[0]) {
//            cnt++;
//        }
//
//        else if( A[i] == A[0] && v[i][A[i]] < v[0][A[0]]){
//            cnt++;
//        }
//
//    }
//    cout<<cnt+1<<el;
//for(auto i : B)
//    cout<<i.first.first<<' '<<i.first.second<<' '<<i.second<<el;
    for (int i = 0; i < n ; ++i) {
        if(B[i].first.second == tmp.first.second && B[i].second == tmp.second && B[i].first.first == 0){
            cout<<i+1<<el;
            break;
        }
    }
//cout<<"++++++"<<el;
 
//cout<<el;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
//    setIO("angry");
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}