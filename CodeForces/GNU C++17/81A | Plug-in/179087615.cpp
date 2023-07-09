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
   string s;
    cin>>s;
    stack<char>stk;
    stk.push(s[0]);
    for (int i = 1; i < s.size(); ++i)
    {
if(stk.empty())
            stk.push(s[i]);
 
        else if(stk.top()==s[i]&&!stk.empty())
            stk.pop();
else
    stk.push(s[i]);
    }
    string res;
    while(!stk.empty()){
        res+=stk.top();
        stk.pop();
    }
     reverse(res.begin(), res.end());
    cout<<res;
}