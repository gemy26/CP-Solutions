#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
void RunCase(){
int n;
cin >> n;
vector<int>res;
int cnt=0;
if(n%2==0){return void(cout<<-1<<el);}
while(n>1){
   if((n-1)/2&1){
    res.push_back(2);
    n = (n-1)/2;
}
   else{
       res.push_back(1);
       n = (n+1)/2;
   }
}
if(cnt > 40 || res.size() == 0)
    return void(cout<<-1<<el);
cout<<res.size()<<el;
    reverse(all(res));
for(auto i : res)
    cout<<i << ' ';
cout<<el;
}
 
 
 
 
 
int main(){
    HereWeGo();
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
        RunCase();
}
 