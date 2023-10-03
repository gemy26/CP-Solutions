#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main(){
    ios::sync_with_stdio(false);
   int k,t,cnt=0,res=0;
    string s;
    cin>>s;
   cin>>k;
   t=k;
int n=s.size();
vector<int>v(n);
    for (int i = 0; i <= s.size()-1 ; ++i) {
        if(s[i]=='.'){v[i+1]=v[i]+1;}
        else{
            v[i+1]=v[i];
        }
    }
   int r=0;
    for (int l = 0; l < n ; ++l) {


        while (r<n&&(v[r+1]-v[l]<=k)){
            r++;
        }
        res=max(res,r-l);

    }
    cout<<res;

}

