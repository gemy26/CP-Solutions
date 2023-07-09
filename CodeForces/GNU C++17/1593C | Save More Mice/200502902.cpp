#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second > b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
void RunCase(){
   int n,k;
   cin >> n >> k;
   vector<ll>A(k);
   for(auto &i : A)
       cin >> i;
 
   sort(all(A));
    reverse(all(A));
    for (int i = 0; i < k; ++i) {
        A[i] = n-A[i];
    }
    for (int i = 1; i < k ; ++i) {
        A[i]+=A[i-1];
    }
   cout<<lower_bound(all(A),n)-A.begin()<<el;
 
 
 
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 