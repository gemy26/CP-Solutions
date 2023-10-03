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
 int t;
 cin>>t;
    while (t--){
        int n;
        cin>>n;
        multiset<int>st;
        while (n--){
            int x;
            cin>>x;
            if(x%2){st.insert(x);}
        }
        cout<<st.size()<<el;
    }

}

