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
int t;
cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        string s;
 
        cin >> s;
 
        int f,e;
        int cnt = 0;
        for (int i = 0; i < s.size() ; ++i) {
            if(s[i] == '*'){
                f=i;
                cnt++;
                break;
            }
        }
        for (int i = n-1; i >=0 ; i--) {
            if (s[i] == '*'){
                e=i;
                cnt++;
                break;
            }
        }
        if(f==e){
            cout<<1<<el;
            continue;
        }
int i = f;
        while (true) {
            i+=k;
            if(i>=e){break;}
            while (true){
                if(s[i]!='*') {
                    i--;
                }
                else {
                    break;
                }
            }
            cnt++;
 
        }
        cout<<cnt<<el;
 
    }
 
}