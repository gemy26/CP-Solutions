#include<bits/stdc++.h>



using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()


const ll  mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N=2e5+5;

void setIO(string name = "") {
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if (a.first  == b.first){return a.second < b.second;}
    return a.first > b.first;
}


//bool valid(int i,int j){
//    return i >= 0 && i < n && j >= 0 && j < m;
//}



int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);




vector<vector<pii>>v(37);
    int cnt=1;
void RunCase() {

 int n;
 cin >> n;

 for(int i=0;i<n;i++){
     int x;
     cin >> x;
     v[x].pb({n,cnt});
 }








    
}


















int main(){
    HereWeGo();
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t ; ++i) {
        RunCase();
        cnt++;
    }
    int c;
    cin >> c;
    if(v[c].size() == 0){
        cout<<0<<el;
        return 0;
    }
    else{
        vector<int>A;
        sort(all(v[c]));
        int x = v[c][0].first;
        A.pb(v[c][0].second);
        for(int i = 1;i<v[c].size();i++){
            if(v[c][i].first == x){A.pb(v[c][i].second);}
        }
        cout<<A.size()<<el;
        for( auto i : A)cout<<i<<" ";

    }






}
