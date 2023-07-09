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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[3]={0};
        string words[3][n];
        map<string,int>mp;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin>>words[i][j];
                mp[words[i][j]]++;
            }
        }
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if(mp[words[i][j]]==1){a[i]+=3;}
                else if(mp[words[i][j]]==2){a[i]++;}
            }
        }
        for (int i = 0; i < 3; ++i)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
}