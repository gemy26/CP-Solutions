#include<bits/stdc++.h>
using namespace    std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
#define N 5000
vector<int>G[N];
 
 
void RunCase(){
int n;
cin >> n;
for (int i = 0; i < n; ++i)
{
   int p;
   cin >> p;
   p--;
   G[i].push_back(p);
}
for (int i = 0; i < n; ++i)
{
   for(int j : G[i]){
         for(int k : G[j]){
                 for(int c : G[k]){
                  if(c == i){
                     return void(cout<<"YES\n");
                  }
                 }
         }
   }
}
return void(cout<<"NO\n");
}
int main(){
 
   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); 
       freopen("output.txt","w",stdout);
  #endif
 
      int t = 1;
      //cin >> t;
      while(t--)
         RunCase();
 
  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
  #endif
 
   return 0;
}