#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
int main(){
int t;
 cin >> t;
 while(t--){
  ll n;
  cin >>n;
 ll res = n*(n-1);
ll i =1;
while(i<=n){
 res = ((res%mod)*i)%mod;
 i++;
 }
 cout<<res<<el;
}
}
 
 