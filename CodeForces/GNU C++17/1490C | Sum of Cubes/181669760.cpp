#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#include <fstream>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
using namespace std;
//------is prime---------//
int isPrime(int k)
{
 
    if (k <= 1)
        return 0;
    if (k == 2 || k == 3)
        return 1;
    if (k % 2 == 0 || k % 3 == 0)
        return 0;
 
    for (int i = 5; i * i <= k; i = i + 6)
        if (k % i == 0 || k % (i + 2) == 0)
            return 0;
 
    return 1;
}
 
bool palindrome(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p)
        return true;
    else
        return false;
}
 
//-----------------------//
const int AK = 5e5 + 5;
const long long VVB = 5e9 + 5;
//----------------------//
bool sortbysecdesc(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}
int mod = 1e9 + 7;
 
bool check(ll i,ll n){
    ll l=1,r=i,m;
    while(l<=r){
        m = (l+r)/2;
        if(pow(m,3)+pow(i,3) == n)
        return true;
        else if (pow(m, 3) + pow(i, 3) > n)
        r=m-1;
        else if (pow(m, 3) + pow(i, 3) < n)
        l=m+1;
    }
    return false;
}
int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bool flag = false;
        for (size_t i = 0; i <= cbrt(n); i++)
        {
          if(check(i,n)){
         flag = true;
         break;
          }
        }
        if(flag)
          cout << "YES" << el;
          else
        cout<<"NO"<<el;
    }
}