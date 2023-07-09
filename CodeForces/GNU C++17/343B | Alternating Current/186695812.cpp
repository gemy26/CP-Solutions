#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
stack<char>stk;
    for (int i = 0; i < s.size() ; ++i) {
        if(!stk.empty() && stk.top() == s[i]){stk.pop(); continue;}
        stk.push(s[i]);
    }
    if(stk.size())
        cout<<"NO\n";
    else
        cout<<"YES\n";
}