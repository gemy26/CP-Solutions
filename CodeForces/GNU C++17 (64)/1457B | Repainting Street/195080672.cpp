#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
int main(){
    HereWeGo();
int t;
 cin >> t;
 while(t--){
     int n,k;
     cin >> n >> k;
     vector<int>v(n);
     for (int i = 0; i < n; ++i) {
         cin >> v[i];
     }
  int a[101]={};
  //vector<int>a(101);
 
 
     for (int i = 0; i < 100 ; ++i) {
         for (int j = 0; j < n ; j++ ) {
             if(v[j] != i+1){
                a[i]++;
                 j+=k-1;
             }
 
         }
     }
     sort(a,a+100);
     //sort(all(a));
     cout<<a[0]<<el;
 
 }
 
 
 
}
 