#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){return a.second < b.second;}
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr)
bool check(string s){
    for (int i = 1; i < s.size() ; ++i) {
        if(s[i]==s[i-1]){return true;}
 
    }
    return false;
}
int main(){
    HereWeGo();
int t;
cin >> t;
 
    while (t--){
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        stack<char>stk1,stk2;
        bool fa = true,fb = true;
        for (int i = 1; i < a.size() ; ++i) {
            if(a[i]==a[i-1]){fa= false;}
 
        }
        for (int i = 1; i < b.size() ; ++i) {
            if(b[i]==b[i-1]){fb=false;}
 
        }
        if(fa&&fb){cout<<"YES\n"; continue;}
        else if(!fa){
 
            //char ch = a[cur];
            int cur=a.size()-1;
            while (cur!=0 && (check(a) || check(b))){
                cur=a.size()-1;
                if(b[b.size()-1]==a[cur]){cout<<"NO\n"; goto here;}
                else{
                    b+=a[cur];
                    a.pop_back();
                }
            }
            cout<<"YES\n";
            continue;
        }
        else if(!fb){
            int cur=b.size()-1;
            char ch = b[cur];
            while (cur!=0 && (check(a) || check(b))){
                cur=b.size()-1;
                if(a[a.size()-1]==b[cur]){cout<<"NO\n"; goto here;}
                else{
                    a+=b[cur];
                    b.pop_back();
                }
            }
            cout<<"YES\n";
            continue;
        }
        here:;
    }
 
}
 