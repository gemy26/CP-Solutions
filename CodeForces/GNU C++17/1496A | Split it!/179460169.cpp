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
     bool flag =true;
     int n;
     cin>>n;
    string s;
   
     int size = s.size();
    int k;
    cin>>k;
    
     cin>>s;
 
     if(k*2 >= n){cout<<"NO"<<el; goto here;}
   for (int i = 0; i < k; ++i)
   {
       if(s[i] == s[n-i-1])
        continue;
    else
        {
            cout<<"NO"<<el;
            goto here;
        }
   }
   cout<<"YES"<<el;
       here:
       int q; 
   }
}