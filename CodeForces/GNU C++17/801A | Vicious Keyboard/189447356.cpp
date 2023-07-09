#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
 
 
int main(){
fast_cin();
    string s;
    cin >> s;
    bool f = false,c= true;
    int cnt = 0,j;
    if( s.size() == 1){cout << 0 ; return 0;}
    for (int i = 1; i < s.size(); ++i) {
        if(s[i] == 'K' && s[i-1] == 'V' )
            cnt ++,s[i]='0',s[i-1]='0';
    }
    for (int i = 0; i < s.size()-1 ; ++i) {
        if(s[i] == s[i+1] && s[i]!= '0')
        { cnt++,cout<<cnt;return 0;}
    }
    cout<<cnt;
 
}