#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<cmath>
#define FAST ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
using namespace std;
 
 
 
int main()
{
 
    FAST
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
 
          if(s[0]=='2' &&s[1]=='0' &&s[2]=='2' &&s[3]=='0'){
          cout<<"YES"<<endl;
          break;
          }
          else if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
          {
              cout<<"YES"<<endl;
               break;
          }
          else if(s[0]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
          {
              cout<<"YES"<<endl;
               break;
          }
           else if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
          {
              cout<<"YES"<<endl;
               break;
          }
           else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0')
          {
              cout<<"YES"<<endl;
               break;
          }
          else {
            cout<<"NO"<<endl;
            break;
 
          }
 
       }
    }
 
    return 0;
}