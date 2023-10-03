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
 
   string s;
   cin >> s;
   stack<char>stk;
   bool f =  false;
  if(s == "()"){
      return void(cout<<"NO\n");
  }
 
  
       cout<<"YES\n";
//       for (int i = 0; i < s.size() ; ++i) {
//           cout<<"(";
//       }
//       for (int i = 0; i < s.size() ; ++i) {
//           cout<<")";
//       }
if(s.find("((") != -1 || s.find("))") != -1){
           for (int i = 0; i < s.size()*2 ; ++i) {
        if(i%2==0)cout<<"(";
        else cout<<")";
    }
}
else {
    
    for (int i = 0; i < s.size() ; ++i) {
           cout<<"(";
       }
       for (int i = 0; i < s.size() ; ++i) {
           cout<<")";
       }
}
 
       cout<<el;
   
 
 
 
 
}
 
 
 
 
int main(){
    HereWeGo();
//    freopen("moocast.in", "r", stdin);
//    freopen("moocast.out", "w", stdout);
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
 
    }
    return 0;
 
}