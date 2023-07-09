#include <bits/stdc++.h>
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
    while(t--)
    {
        int cnt = 0;
        int n;
        cin>>n;
        vector<int>v(n);
        set<int>st;
        ll frq[1000000]={0};
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
            //frq[v[i]]++;
        }
        for (int i = n-1; i >= 0; --i)
        {
          if(!st.count(v[i])){st.insert(v[i]);}
          else
            break;
        }
cout<<v.size()-st.size()<<el;
}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 