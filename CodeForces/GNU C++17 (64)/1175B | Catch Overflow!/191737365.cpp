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
    ll x= 4294967296;
int n;
cin >> n;
stack<ll>st;
    ll v = 0;
    st.push(1);
    while (n--){
ll temp = 1;
        string s;
        cin >> s;
         if( s == "add"){
           v+=st.top();
         }
         if(s == "for"){
             ll y;
             cin >> y;
             st.push(min(x,st.top()*y));
 
 
 
 
         }
         if(s == "end"){
             st.pop();
         }
 
    }
if(v >= x){cout<<"OVERFLOW!!!";}
else
    cout<<v;
 
}
 