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
 
 
int n;
string s;
cin >> n >> s;
set<string>st;
for (int i = 0; i < s.size()-1; ++i)
{
    string f = s.substr(i,2);
    st.insert(f);
}
cout<<st.size()<<el;
 
 
 
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