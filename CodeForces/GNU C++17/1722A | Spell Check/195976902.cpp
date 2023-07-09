#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(const pair<int,int>& a,const pair<int, int>& b){return a.second > b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int main(){
    HereWeGo();
//istring timur = "Timur";
    int t;
    cin >> t;
    while (t--) {
set<char>st;
        string s;
        int x; cin>>x;
        cin >> s;
        for (int i = 0; i < s.size() ; ++i) {
            st.insert(s[i]);
        }
        string final ;
        for (auto i : st) {
            final += i;
        }
        if(final=="Timru" && s.size() == 5){cout<<"YES"<<el;}
        else
            cout<<"NO"<<el;
      //  int cnt = 0;
 
    }
}
 