#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
 
int main(){
    ios::sync_with_stdio(false);
   int n,k,t;
   cin >> n >> k;
   t=k;
   map<ll,ll>S;
   map<ll,ll>B;
    for (int i = 0; i < n ; ++i) {
        char c; int x,y;
        cin>>c>>x>>y;
        if(c=='S'){
            S[x]+=y;
        }
        else{
            B[x]+=y;
        }
    }
//    for(auto i : B)
//        cout<<i.first<<' '<<i.second<<el;
 
 
while(k < S.size()){S.erase(--S.end());}
while (k < B.size()){B.erase(B.begin());}
    int j= 0;
    for (auto i = S.rbegin(); i != S.rend() &&j<k; i++,j++)
        cout << 'S'<< ' '<< i->first << " " << i->second<< endl;
j=0;
    for (auto i = B.rbegin(); i != B.rend() &&j<k; i++,j++   )
        cout << 'B'<< ' '<< i->first << " " << i->second<< endl;
 
}
 