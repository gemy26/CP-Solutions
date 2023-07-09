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
      int i = 0;
       int x=0,y=0;
       while (i<n){
 
           if(s[i]=='U'){x++;}
           else if(s[i]=='D'){x--;}
           else if(s[i]=='R'){y++;}
           else y--;
           if(x==1&&y==1){cout<<"YES\n"; goto here;}
           i++;
       }
       if(x==1&&y==1){cout<<"YES\n"; continue;}
       cout<<"NO\n";
       here:;
   }
 
 
}
 