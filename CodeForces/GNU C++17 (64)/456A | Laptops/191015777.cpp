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
 int n;
 cin>>n;
 vector<pair<int,int>>v(n);
    for (int i = 0; i < n; ++i) {
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        if(v[i].second>v[i].first)
            cnt++;
    }
    if(cnt)
        cout<<"Happy Alex\n";
    else
        cout<<"Poor Alex\n";
}
 