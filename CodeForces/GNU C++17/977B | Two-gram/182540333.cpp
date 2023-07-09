#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define all(x) x.begin(), x.end()
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
 
const long long VVB = 5e9 + 5;
//----------------------//
bool sortbysecdesc(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}
int mod = 1e9 + 7;
int main()
{
    fast_cin();
    int n;
    cin>>n;
   string s,res;
   cin>>s;
   int max=0;
 
    for (int i = 0; i < s.size()-1; ++i) {
        string t;
        t+=s[i];
        t+=s[i+1];
        int cnt=0;
        for (int j = 0; j < s.size()-1; ++j) {
            if(s[j]==t[0] && s[j+1]==t[1])
                cnt++;
        }
        if(cnt>max){
            max=cnt;
            res=t;
        }
    }
    cout<<res;
}