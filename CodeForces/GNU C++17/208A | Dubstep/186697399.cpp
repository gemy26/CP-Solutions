#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (i < s.size() && i + 1 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            s[i] = '0', s[i + 1] = '0', s[i + 2] = '0';
        }
    }
    queue<char> q;
    bool f = false;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '0') {
            q.push(s[i]);
            f = false;
        }
        else if(s[i]=='0'&& f==false) {
            q.push(' ');
            f = true;
        }
    }
    while (!q.empty()) {    
    cout << q.front();
    q.pop();
}
 
}