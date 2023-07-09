#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    //multiset<char>st;
    string s;
    cin>>s;
    string hello ="hello";
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]==hello[cnt])
            cnt++;
    }
    if(cnt==5){cout<<"YES";}
    else
        cout<<"NO";
   // cout<<cnt;
 
    return 0;
}