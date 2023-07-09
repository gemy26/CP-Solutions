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
 
bool cmp(const pair<int, double>& a,const pair<int, double>& b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
//bool cmp(const string& a,const string& b){return a.size() < b.size();}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
 
 
 
void RunCase() {
    string s;
    cin >> s;
    int cnt=0;
    vector<int>v;
 
 
    for (int i = 0; i < s.size() ; ++i) {
        string t= s.substr(i,4);
        if(t.find("bear")!=-1){
           v.pb(i);
        }
    }
    int res=0;
/*
 * bearaabear
 * 0 6
 * bear beara bearaa bearaab bearaabe bearaabea bearaabear bearaabearc bearc abear aabear abearc aabearc raabearc araabearc earaabearc  aabear raabear araabear earaabear
 * (1+7)+(1+1)+(5*(1+1))=8+2+10=20
 * */
 
 
for (int i = 0; i < (int)v.size() ; ++i) {
        int y = (s.size()-v[i]-3);
        int x=1;
        if(i){
            x = v[i-1]+2;
           // cout<<x<<"++++";
        }
    x = v[i]-x+2;
 
        res+=(x*y);
    }
    cout<<res;
 
 
 
}
 
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}