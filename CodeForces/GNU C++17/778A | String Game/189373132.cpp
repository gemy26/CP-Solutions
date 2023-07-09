#include<bits/stdc++.h>
using namespace std;
string s, t;
 
 
vector<long long>v;
bool good(long long x){
 
    string k,w;
    k = s;
    for (long long i = 0; i < x; ++i)
    {
        k[v[i] - 1] = '#';
    }
 
    long long l=0;
    for (long long i = 0; i < s.size() ; ++i)
    {
        if(k[i] != '#') {
            if (k[i] == t[l])
                l++;
            if (t.size() == l)
                return true;
        }
    }
    if(l == t.size())
        return true;
   return false;
 
}
 
 
int main() {
 
 
    cin >> s >> t ;
    v.resize(s.size());
    for (long long i = 0; i < s.size()-1 ; ++i) {
        cin >> v[i];
    }
    long long l=-1,r=s.size(),m;
    while(l +1 < r){
        m = (l + r) / 2;
        if(good(m))
            l = m;
        else
            r = m;
    }
    cout<<l;
 
}