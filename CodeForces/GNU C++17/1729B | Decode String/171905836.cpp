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
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
 
 
 
int main() {
    int t;
    cin>>t;
 
    while(t--) {
        string fi="";
        int n; cin>>n;
     string s;
     cin>>s;
     stack<char>st;
        for (int i = 0; i < s.size() ; ++i) {
            st.push(s[i]);
        }
     while(!st.empty()){
         int val = st.top()-'0';
         st.pop();
         if(val!=0){fi+='a'+val-1;}
         else
         {
             int val1 = st.top()-'0';
             st.pop();
             int val2 = st.top()-'0';
             st.pop();
             int res = val2*10 + val1;
             fi += res+'a'-1;
 
         }
     }
        std::reverse(fi.begin(), fi.end());
     cout<<fi<<endl;
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 