#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
bool cmp(const pair<int, double>& a,const pair<int, double>& b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
//bool cmp(const string& a,const string& b){return a.size() < b.size();}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
 
 
double n,t1,t2,k;
double calc(double x,double y){
    x=(double)x;
    y=(double)y;
    t1=double(t1);
    t2=(double)t2;
    double perc=(double)((double)k/100.00);
    double _1 = (t1*x)-(((t1*x*k))/100.00)+(t2*y);
    double _2 = (t1*y)-(((t1*y*k))/100.00)+(t2*x);
//    double _3 = (double)(perc*t2*x)+(t1*y);
//    double _4 = (double)(perc*t2*y)+(t1*x);
 
 
 
    return max({_1,_2});
    //cout<<max({_1,_2})<<el;
}
 
 
void RunCase() {
 
 
cin >> n >> t1 >> t2 >> k;
vector<pair<int,double>>v;
    for (int i = 0; i < n; ++i) {
        double x,y;
        cin >> x >> y;
        v.pb({i+1, calc(x,y)});
        //calc(x,y);
    }
    sort(v.begin(),v.end(), cmp);
for(auto i : v){
    cout<<i.first<<' '<<fixed<<setprecision(2)<<i.second<<el;
}
}
 
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}