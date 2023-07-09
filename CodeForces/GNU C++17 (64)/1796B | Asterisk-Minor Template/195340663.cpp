#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el endl
 
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
int matchab(string a, string b){
    int m = a.size(),n=b.size();
    for (int i = 0; i <= n-m ; i++) {
        int j;
 
 
        for (j = 0; j < m; j++)
            if (b[i + j] != a[j])
                break;
 
        if (j == m)
            return i;
    }
 
    return -1;
}
 
int main(){
 
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--){
        string a,b;
        cin >> a >> b;
//if(a== b){
//    cout<<"YES\n"<<a<<el; continue;
//}
        if(a.size() == 1 && b.size()==1 ){
            if(a==b){
                cout<<"YES\n"<<a<<el;
                continue;
            }
            else
                cout<<"NO"<<el; continue;
        }
if(a[a.size()-1] == b[b.size()-1]){
    cout<<"YES\n"<<"*"<<a[a.size()-1]<<el;
    continue;
}
if(a[0] == b[0]){
    cout<<"YES\n";
    cout<<a[0]<<"*"<<el;
    continue;
}
 
 
 
        for (int i = 0; i < a.size() ; ++i) {
            string temp;
            for (int j = 0; j < b.size(); ++j) {
                if(a[i] == b[j] ){
                    if(i<a.size()-1 && j < b.size()-1 ){
                        if(a[i+1] == b[j+1]) {
                            cout << "YES\n";
                            cout << "*" << a[i] << a[i + 1] << "*" << el;
                            goto here;
                        }
                    }
 
                }
            }
        }
        cout<<"NO\n";
       here:;
 
    }
 
}
 