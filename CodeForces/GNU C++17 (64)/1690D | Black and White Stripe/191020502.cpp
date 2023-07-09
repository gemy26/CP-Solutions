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
    while (t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>v(n+1,0);
        for (int i = 1; i <= n; ++i) {
            if(s[i-1]=='W'){v[i]=v[i-1]+1;}
            else{v[i]=v[i-1];}
        }
        int r=0;
        int res=INF;
        for (int i = k; i <= n ; ++i){
            res=min(res,v[i]-v[i-k]);
        }
        cout<<res<<el;
 
    }
 
}
 