#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
ll S=0,B=0,C=0;
ll NB,NC,NS;
ll PB,PC,PS;
ll R;
bool good(ll m){
    return ((max(m*B - NB,(ll) 0)*PB)+(max(m*C - NC,(ll)0)*PC)+(max((ll)0,m*S -NS)*PS)) <= R;
}
int main(){
HereWeGo();
  string s;
  cin>>s;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == 'B')
            B++;
        else if(s[i] == 'C')
            C++;
        else
            S++;
    }
    cin >> NB >> NS >> NC;
    cin >> PB >> PS >> PC;
    cin >> R;
    ll m , l=0,r=1e14;
    while (l+1  < r){
        m = (l+r)/2;
        if(good(m)){l=m;}
        else
            r=m;
    }
    cout<<l;
 
 
}