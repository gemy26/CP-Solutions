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
   string s,t,tmp="";
   cin>>s>>t;
   int cnt=0,aut=0,sufa=0,arr=0;
    int check =0;
   map<char,int>mp;
   map<char,int>mp1;
   for(int i=0;i<s.size();i++)
    mp[s[i]]++;
    for(int i=0;i<t.size();i++)
    mp1[t[i]]++;
   for (int i = 0; i < t.size(); ++i)
   {
       if(mp[t[i]] < mp1[t[i]]){
        //cout<<s[i]<<' '<<mp[s[i]]<<' '<<mp1[t[i]]<<el;
        cout<<"need tree";
        return 0;
       }
       else if(mp[s[i]] > mp1[s[i]])
        aut++;
      
   }
//    for(auto i : mp)
//     cout<<i.first<<' '<<i.second<<el;
 
// cout<<el;
// for(auto i : mp1)
//     cout<<i.first<<' '<<i.second<<el;
 
 
    //check array
    int x=t.size();
    for (int i = 0,j=0; i < s.size();i++)
    {
        if(s[i]==t[j]){
            j++;
            x--;
        }
    }
 
 
    
    if(x > 0)
        arr++;
      if(aut && arr){
        cout<<"both";
        return 0;
      }
      if(!aut && arr)
      {
        cout<<"array";
        return 0;
      }
      if(aut && !arr){
        cout<<"automaton";
        return 0;
      }
 
 
}