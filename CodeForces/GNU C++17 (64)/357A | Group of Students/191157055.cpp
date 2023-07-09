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
   int a[n];
   int t=0;
 
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        t+=a[i];
    }
    int x,y;
    cin>>x>>y;
    int sum=0;
    int res=0;
    for (int i = 0; i < n ; ++i) {
        sum+=a[i];
        if(sum>=x&&sum<=y&&(t-sum>=x)&&(t-sum<=y)){res=i+2;}
    }
cout<<res;
 
}
 