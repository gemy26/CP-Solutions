#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main(){
   int t;
   cin >> t;
   while(t--){
       int n;
       cin >> n;
       int a[n];
       int cnt=0;
       for (int i = 0; i < n ; ++i) {
           cin >> a[i];
           if(a[i]==1)cnt++;
       }
       int res=0;
  if(cnt%2==0){res+=cnt/2; }
  else{cnt--; res+=cnt/2; }
  res+=(n-cnt);
  cout<<res<<el;
   }
 
}
 