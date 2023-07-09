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
   int n;
   cin>>n;
   int a[n];
   set<int>st;
   for (int i = 0; i < n; ++i)
   {
       cin>>a[i];
       st.insert(a[i]);
   }
   if(st.size()==2 || st.size()==1){
    cout<<"YES";
    return 0;
   }
   sort(a,a+n);
if(st.size() > 3){
    cout<<"NO";
    return 0;
}
vector<int>v(st.begin(),st.end());
 
    if(v[1]-v[0] == v[2]-v[1])
        cout<<"YES";
        else
            cout<<"NO";
    
 
 
 
 
 }  