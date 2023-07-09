#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#include <deque>
#include <list>
#include <set>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define el "\n"
#define ll long long
#define nfnd std::string::npos
using namespace std;
bool palindrome(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p)
        return true;
    else
        return false;
}
 
int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--){
       int a,b;
       int x;
       cin>>a>>b;
       if(a == b)
       {
        cout<<0<<el;
        continue;
       }
       else if(a > b){
        x = a - b;
        if(x % 2 == 0)
        {
            cout<<1<<el;
            continue;
        }
        else
        {
            cout<<2<<el;
            continue;
        }
       }
       else
       {
        x = b - a;
        if(x % 2 == 0){
            cout<<2<<el;
        }
        else
        {
            cout<<1<<el;
            continue;
        }
       }
        
    }
}