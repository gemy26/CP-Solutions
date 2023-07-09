#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll MOD = 1000000007;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
void RunCase(){
    int n=4;
int x1,y1,x2,y2;
cin >> x1>>y1>>x2>>y2;
vector<int>v={x1,y1,x2,y2};
if(x1!=x2 && y1!=y2 && abs(x1-x2)!=abs(y1-y2)){
    return void(cout<<-1);
}
if(x1==x2){
    int x = max(((y2)-(y1)),((y2)-(y1)));
    cout<<x1+x<<' '<<y1<<' '<<x2+x<<' '<< y2;
}
else if(y1 == y2){
    int y = abs(x1-x2);
    cout<<x1<<' '<<y1+y <<' '<<x2<<' '<<y2+y;
}
else{
    cout<<x1<<' '<<y2<<' ' << x2 << ' '<<y1 ;
}
 
 
 
 
}
int main() {
 
   int t = 1;
   //cin >> t;
    while (t--)
        RunCase();
}
 