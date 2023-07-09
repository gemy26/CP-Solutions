#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
int main(){
   HereWeGo();
   int t;
   cin >> t;
 
   while(t--){
     int n;
     cin >> n;
     string s;
      cin >> s;
      int l=0,r=n-1;
       while (r>l){
           if((s[r]=='1'&&s[l]=='0') ||(s[r]=='0'&&s[l]=='1') ){n-=2; l++; r--;}
           else{break;}
       }
       cout<<r-l+1<<el;
   }
 
 
}
 