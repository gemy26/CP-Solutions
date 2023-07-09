#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#include <deque>
#include <list>
#include <set>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
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
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1){cout<<2<<endl; continue;}
        else if(n%3==0){cout<<n/3<<endl; continue;}
        else{
            cout<<(n/3 +1)<<endl;
        }
    }
}