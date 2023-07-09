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
    int a,b;
    cin>>a>>b;
    int sum = a;
    while( a >= b){
        int x = a / b;
        sum += x;
      a = (a/b)+(a%b);
    }
    cout<<sum;
}