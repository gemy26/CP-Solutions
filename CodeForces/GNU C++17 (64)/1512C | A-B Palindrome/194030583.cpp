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
    while (t--) {
        int z, o;
        cin >> z >> o;
        string s;
        cin >> s;
        int ans = std::count(s.begin(), s.end(),'?');
//        if (ans > o + z) {
//            cout << -1 << el;
//            continue;
//        }
        int l = 0, r = s.size() - 1;
        while (r>l){
            if(s[l]!=s[r]){
                if(s[l] == '?' && s[r] == '1' && o >= 1){
                    s[l] = '1';
                    o-=2;
                    l++,r--;
                }
                else if(s[l]== '1' && s[r] == '?' && o >= 1){
                    s[r] = '1';
                    o-=2;
                    l++,r--;
                }
                else if(s[l] == '?' && s[r] == '0' && z>=1){
                    s[l] = '0';
                    z-=2;
                    l++,r--;
                }
                else if(s[l] == '0' && s[r] == '?' && z >=1){
                    s[r] = '0';
                    z-=2;
                    l++,r--;
                }
                else
                    goto here;
 
 
            }
            else if(s[l] == s[r] && s[l]=='1'){o-=2;l++,r--;}
            else if(s[l] == s[r] && s[l] == '0'){z-=2;l++,r--;}
            else{
                l++,r--;
            }
        }
        l = 0 , r = s.size()-1;
        while (r > l){
            if(s[l] == s[r] && s[l]=='?'){
                if(o>=2){
                    s[l] = '1',s[r]='1';
                    o-=2;
                }
                else if(z >= 2){
                    s[l] = '0',s[r]='0';
                    z-=2;
                }
 
            }
 
            l++,r--;
        }
 
 
    if(s.size()%2==1){
       if(s[s.size()/2]=='?'){
           if(o){s[s.size()/2]='1';o--;}
           else if(z){s[s.size()/2]='0';z--;}
       }
       else if(s[s.size()/2]=='1'){o--;}
       else
           z--;
   }
    if(o>0||z>0){cout<<-1<<el; continue;}
       cout<<s << el;
    continue;
        here:;
    cout<<-1<<el;
    }
}
 