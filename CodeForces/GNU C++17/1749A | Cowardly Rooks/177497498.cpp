#include <bits/stdc++.h>
#include<string.h>
#define ll long long
#define el "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;
 
int main() {
    fast_cin();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>v(m);
        for (int i = 0; i < m ; ++i) {
            cin>>v[i].first>>v[i].second;
        }
        if(m >= n){cout<<"NO"<<el; continue;}
        else
            cout<<"YES"<<el;
 
       
 
    }
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 