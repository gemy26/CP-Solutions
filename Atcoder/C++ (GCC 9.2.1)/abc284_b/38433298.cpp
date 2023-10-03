#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main(){
    ios::sync_with_stdio(false);
 int n;
 cin>>n;
 vector<int>v(n);
    for(auto&i:v)
        cin>>i;
    int q;
    cin>>q;
    while (q--){
        int n;
        cin>>n;
        if(n==1){
            int k,x;
            cin>>k>>x;
            v[k-1]=x;

        }
        else{
            int i;
            cin>>i;

            cout<<v[i-1]<<el;
        }
    }

}

