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
    set<string >st;
    while (t--){

        string s;
        cin >> s;
        if(s[0]=='H'||s[0]=='C'||s[0]=='D'||s[0]=='S'){
            if(s[1]=='A'||s[1]=='2'||s[1]=='3'||s[1]=='4'||s[1]=='5'||s[1]=='6'||s[1]=='7'||s[1]=='8'||s[1]=='9'||s[1]=='T'||s[1]=='J'||s[1]=='Q'||s[1]=='K'){
                if(st.count(s)){cout<<"No\n"; return 0;}
                else
                    st.insert(s);
            }
            else{
                cout<<"No\n";
                return 0;
            }
        }
        else{
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";


}

