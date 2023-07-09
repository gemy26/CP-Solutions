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
   int t;
   cin>>t;
 
  set<pair<string,string>>st;
    for (int i = 0; i < t; ++i) {
        pair<string ,string>p;
        string x,y,s;
        cin>>x>>y;
       p.first=x;
       p.second=y;
       st.insert(p);
       // cout<<s<<el;
    }
    cout<<st.size();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 