#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(const pair<int,int>& a,const pair<int, int>& b){return a.second > b.second;}
// here we go
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int main(){
    HereWeGo();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(auto&i:v)
            cin >> i;
 
        int dif = 999999999;
        int pos;
        sort(all(v));
        if(n == 2)
        {
            cout<<v[0]<<' '<<v[1]<<el;
            continue;
        }
        for (int i = 1; i < n ; ++i) {
            if(dif > abs(v[i]-v[i-1])){
                dif = abs(v[i]-v[i-1]);
                pos=i;
            }
        }
        for (int i = pos; i <n ; ++i) {
            cout<<v[i]<<' ';
        }
        for (int i = 0; i < pos ; ++i) {
            cout << v[i]<<' ';
        }
        cout<<el;
 
 
    }
 
}
 