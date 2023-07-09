#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
 
int main() {
    HereWeGo();
    int n;
    cin >> n;
    map<int,int>mp;
    vector<int>v(n);
    ll total = 0;
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
        //if(v[i] > total && i!=0){cout<<"NO"; return 0;}
       if(v[i] == 25){
           mp[25]++;
       }
        if(v[i]==50 ){
            if(!mp[25]) {
                cout << "NO";
                return 0;
            }
            else
                mp[25]--,mp[50]++;
        }
        if(v[i] == 100){
            if(mp[25] && mp[50]){
                mp[50]--;
                mp[25]--;
            }
            else if(mp[25]>2) {
                mp[25]-=3;
                mp[100]++;
            }
 
                else{
                    cout<<"NO";return 0;
                }
 
 
            }
 
        //mp[v[i]]++;
 
        }
    cout<<"YES";
 
    }
 
 
 