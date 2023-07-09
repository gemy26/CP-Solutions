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
 
int main()
{
    fast_cin();
    string s;
   string t;
   cin>>s;
   cin>>t;
   int cnt=0;
   for (int i = 0; i < s.size(); ++i)
   {
       if(s[i]=='|'){break;}
       cnt++;
   }
   int re = s.size()-cnt-1;
   int total = cnt +re +t.size();
 
   if(t.size() +re == cnt )
   {
    //cout<<"YES"<<el;
    cout<<s<<t;
       return 0;
   }
    if(cnt+t.size() == re){
    //cout<<"YES"<<el;
    cout<<t<<s;
        return 0;
}
     if(total%2 == 0 &&((re&&cnt) || (cnt&&!re) ||(!cnt &&re))){
        int mark1 = 0,mark2=0,c=0;
        string s1,s2;
        for (int i = 0; i < total/2; ++i)
        {
            if(s[i]=='|'){
                mark1=i;
                break;
            }
            s1+=s[i];
            //cout<<s[i];
            c++;
        }
        int k=0;
        while(c!=total/2){
            s1+=t[k];
            //cout<<t[k];
            k++;
            c++;
        }
        //cout<<"|";
        s1+="|";
        mark1++;
        for (int i = mark1; i < s.size(); ++i)
        {
            //cout<<s[i];
            s2+=s[i];
        }
        for (int i = k; i < t.size(); ++i)
        {
            //cout<<t[i];
            s2+=t[i];
        }
        if(s1.size()-1==s2.size())
        cout<<s1<<s2;
    else
        //cout<<s1<<' '<<s2;
        cout<<"Impossible";
        return 0;
    }
    if(cnt==0 && re ==0 && t.size()%2==0){
        int c=0;
        for (int i = 0; i < t.size()/2; ++i)
        {
            c=i;
            cout<<t[i];
        }
        cout<<"|";
        c++;
        for (int i = c; i < t.size(); ++i)
        {
            cout<<t[i];
        }
        return 0;
    }
    else
    cout<<"Impossible";
}