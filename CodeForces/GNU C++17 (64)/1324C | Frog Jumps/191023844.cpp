#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
 
    while (t--) {
 
        string s;
        cin >> s;
        vector<int>v;
        v.push_back(0);
        for (int i = 0; i < s.size() ; ++i) {
            if(s[i]=='R')
                v.push_back(i+1);
        }
        v.push_back(s.size()+1);
        int res = 0 ;
        for (int i = 0; i < v.size()-1 ; ++i) {
          res= max(res,v[i+1]-v[i]);
        }
        cout<<res<<el;
    }
 
 
}
 