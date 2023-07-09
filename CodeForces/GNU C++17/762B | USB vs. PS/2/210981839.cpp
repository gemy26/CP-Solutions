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
 
 
 
 
void RunCase() {
int a,b,c;
cin >> a >> b >> c;
multiset<pair<int,string>>mp;
int m;
cin >> m;
int cnt =0;
ll sum=0;
    for (int i = 0; i < m ; ++i) {
        string s;
        int n;
        cin >> n >> s;
        mp.insert({n,s});
    }
    for(auto i : mp)
    {
        auto k = i;
 
         if(i.second == "PS/2" &&  b> 0){
            b--;
            cnt++;
            sum += i.first;
 
 
        }else if(i.second=="USB" && a > 0){
             a--;
             cnt++;
             sum += i.first;
 
        }
        else if((i.second == "PS/2" ||i.second=="USB") && c>0){
            c--;
            cnt++;
            sum += i.first;
 
        }
    }
cout<<cnt<<" ";
    cout<<sum<<el;
}
 
 
/*
1 5
2 5
3 6
6 9
8 10
 
 
 
 
 *
 *
 *
 *
 * */
 
 
 
 
int main(){
    HereWeGo();
//    freopen("convention2.in", "r", stdin);
//    freopen("convention2.out", "w", stdout);
 
    int t = 1;
//    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}