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





void RunCase() {
int n;
cin >> n;
string s;
cin >> s;
int q;
cin >> q;
vector<pair<int,char>>v(n);
optional<pair<int,int>>ul = nullopt;
for(int i=0;i<n;i++){
    v[i] = {0,s[i]};
}
for(int i=0;i<q;i++){
    int x,y;
    char c;
    cin >> x >> y >> c;
    if( x == 1){
        v[y-1] = {i,c};
    }
    else{
    ul = {i,x};
    }

}

for(const auto &[i,c] : v){
    if(!ul  || i >= ul->first )cout<<c;
    else if(ul->second == 2) cout<<static_cast<char>(tolower(c));
    else{
        cout<<static_cast<char>(toupper(c));

    }
}







    
}


















int main(){
    HereWeGo();
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t = 1;
//    cin >> t;
    for (int i = 0; i < t ; ++i) {
        RunCase();

    }







}
