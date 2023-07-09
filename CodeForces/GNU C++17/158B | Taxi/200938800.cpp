#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
//bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
bool cmp(const string& a,const string& b){return a.size() < b.size();}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
void RunCase(){
int n;
cin >> n;
map<int,int>mp;
    for (int i = 0; i < n ; ++i) {
        int x;
        cin >> x;
        mp[x]++;
    }
 
    int cnt  = 0;
    cnt+=mp[4];
 
    int x=0,x1=0,y=0,y1=0;
    cnt+=min(mp[1],mp[3]);
    x=min(mp[1],mp[3]);
    mp[1]-=x;
    mp[3]-=x;
 
 
 
    if(mp[2]){
       if(mp[2]%2==0){
           cnt+=(mp[2]/2);
           mp[2]=0;
       }
       else if(mp[2]%2==1){
           cnt++;
           mp[1]-=2;
           mp[2]/=2;
       }
    }
 
 
    if(mp[1]>0){
        cnt+=(mp[1]+3)/4;
 
    }
    if(mp[3]){
        cnt+=mp[3];
    }
    if(mp[2]){
        cnt+=mp[2];
    }
 
 
 
 
 
   cout<<cnt;
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 