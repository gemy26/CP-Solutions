#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;
//------is prime---------//
bool isprime(int x)
{
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
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
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
 
int main()
{
    fast_cin();
   int n,x;
   cin>>n>>x;
   string s;
   cin>>s;
   for (int i = 0; i < x; ++i)
   {
       for (int j = 0; j < n;   j++)
       {
           if(s[j]=='B'&&s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;
            }
          
            //cout<<s<<el;
       }
   }
   cout<<s;
}