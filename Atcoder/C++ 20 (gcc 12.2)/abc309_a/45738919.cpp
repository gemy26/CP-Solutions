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

bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if(a.first == b.first)
        return a.second > b.second;

    return a.first < b.first;
}


//bool cmp(const string& a,const string& b){return a+b < b+a;}


int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);



void RunCase() {

    int n,m;
    cin >> n >> m;
    if(n%3 != 0 && n+1 == m){
        cout<<"Yes\n";
    }
    else
    cout<<"No\n";





}




int main(){
    HereWeGo();
//    freopen("moocast.in", "r", stdin);
//    freopen("moocast.out", "w", stdout);

    int t = 1;
//    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;

        RunCase();


    }
    return 0;

}