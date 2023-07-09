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
 
//-----------------------//
const int AK = 5e5 + 5;
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
   int n,q;
   cin>>n>>q;
   string s;
   cin>>s;
   int abc=0;
   for (int i = 0; n > i+2; ++i)
   {
      
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')abc++;
   }
   while(q--){
    int cnt = 0;
    int x;
    cin>>x;
    char ch;
    cin>>ch;
    --x;
    for (int i = max(x-2,0); i <= x; ++i)
    {
        if(n > i+2)
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')abc--;
    }
    //cout<<s<<' ';
    s[x]=ch;
    for (int i = max(x-2,0); i <= x; ++i)
    {
        if(n > i+2)
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')abc++;
    }
    //cout<<s<<' ';
    
    cout<<abc<<el;
   }
}