#include <bits/stdc++.h>
#include<string.h>
#define ll long long
#define el "\n"
using namespace std;
//------is prime---------//
bool isprime(int x)
{
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}
//--------GCD---------------//
 
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
int main() {
    string timur = "Timur";
    int t;
    cin >> t;
    while (t--) {
set<char>st;
        string s;
        int x; cin>>x;
        cin >> s;
        for (int i = 0; i < s.size() ; ++i) {
            st.insert(s[i]);
        }
        string final ;
        for (auto i : st) {
            final += i;
        }
        if(final=="Timru" && s.size() == 5){cout<<"YES"<<el;}
        else
            cout<<"NO"<<el;
      //  int cnt = 0;
 
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 