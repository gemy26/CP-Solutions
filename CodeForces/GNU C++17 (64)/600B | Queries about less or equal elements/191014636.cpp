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
  int n,m;
  cin>>n>>m;
  vector<int>v(n);
  vector<int>a(n);
    for (int i = 0; i < n ; ++i) {
        cin>>v[i];
    }
    sort(all(v));
    while (m--){
        int x;
        cin>>x;
        cout<<upper_bound(all(v),x)-v.begin()<<el;
    }
 
}
 