#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(const pair<ll, ll>& a,const pair<ll, ll>& b){return a.second > b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
 
 
 
 
int main(){
    HereWeGo();
    int t;
    cin >> t;
    while (t--){
 
        double d;
        cin >> d;
 
        if(d<=3&&d>=1){cout<<"N\n"; continue;}
        if(d==4){cout<<"Y 2.000000000 2.000000000\n";continue;}
        double a,b,l=0.0,r=d,m;
        for (int i = 0; i < 200 ; ++i) {
            m = (l+r)/2.0;
            if(m*(d-m) > d)
                r=m;
            else
                l=m;
        }
        cout<<"Y "<<setprecision(10)<<fixed<<m<<' '<<d-m<<el;
 
 
 
 
    }
 
}
 