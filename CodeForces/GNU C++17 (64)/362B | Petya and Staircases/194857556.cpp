#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<int, int>& a,pair<int, int>& b){
    if(a.first != b.first)return a.first >= b.first;
return a.second<b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int main() {
    HereWeGo();
   int n,m;
   cin >> n >> m;
   vector<int>v(m);
   for(auto&i:v)
       cin>>i;
   sort(all(v));
   if(m==0){
       cout<<"YES\n";
       return 0;
   }
 
   if(v[0]==1||v[m-1]==n){
       cout<<"NO";
       return 0;
   }
    for (int i = 0; i < m-2; ++i) {
        if((v[i+2]-v[i+1]==1) && (v[i+1]-v[i]==1))
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES";
 
 
}
 
 
 
 
 
 
 
 