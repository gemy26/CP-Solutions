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
int main()
{
    fast_cin();
    int n,m;
    char c;
    cin>>n>>m>>c;
    char ch[n][m];
    set<char>st;
    // if(n==1&&m==1){cout<<0<<el;return 0;}
    for (size_t i = 0; i < n; i++)
    {
     for (size_t j = 0; j < m; j++)
     {
        cin>>ch[i][j];
     }
    }
 
    for (size_t i = 0; i < n; i++)
    {
     for (size_t j = 0; j < m; j++)
     {
        if(ch[i][j] == c){
            if(j>0){
                if (ch[i][j - 1] != '.' && ch[i][j - 1]!=c)
                    st.insert(ch[i][j - 1]);
            }
            if(j+1 <m){
                if (ch[i][j + 1] != '.' && ch[i][j + 1] !=c)
                    st.insert(ch[i][j + 1]);
            }
            if(i>0){
                if (ch[i - 1][j] != '.' && ch[i - 1][j] !=c)
                    st.insert(ch[i - 1][j]);
            }
            if (i + 1 < n)
            {
                if (ch[i + 1][j] != '.' && ch[i + 1][j]!=c)
                st.insert(ch[i+1][j]);
            }
        }
     }
    }
    cout<<st.size()<<el;
    
}