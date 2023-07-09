#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
int main(){
    HereWeGo();
vector<int>v(5);
ll sum=0;
int z=0;
    for (int i = 0; i < 5; ++i) {
        cin >> v[i];
        sum+=v[i];
        if(v[i] == 0)
            z++;
    }
    sort(all(v));
    if( sum % 5 !=0 || z == 5){
        cout<<-1; return 0;
    }
    else{
        cout<<sum/5;
    }
 
 
}
 