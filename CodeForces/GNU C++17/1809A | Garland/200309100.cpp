#include<bits/stdc++.h>
using namespace std;
 
#define  el '\n'
 
 
 
 
int main(){
 
    int t ;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string s;
        cin >> s;
        set<char>st;
        map<char,int>mp;
        for (int j = 0; j <s.size() ; ++j) {
            st.insert(s[j]);
            mp[s[j]]++;
        }
        if(st.size() == 1){cout<<-1<<el; goto here;}
        else if(st.size() == 4 || st.size() == 3 ){cout<<4<<el;
            goto here;}
        for(auto j : mp) {
            if (j.second == 3) {
                cout << 6 << el;
                goto here;
            }
 
        }
        cout<<4<<el;
         here:;
    }
}