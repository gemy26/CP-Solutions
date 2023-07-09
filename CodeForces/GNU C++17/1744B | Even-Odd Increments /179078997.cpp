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
        int n,q;
        cin>>n>>q;
        int a[n];
        ll sum = 0;
        int even=0,odd=0;
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            sum += a[i];
            if(a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        
        for (int i = 0; i < q; ++i)
        {
            int x,y;
            cin>>x>>y;
            if(x == 0 && y%2==0){sum+=(even*y);cout<<sum<<el; continue;}
            else if(x==0&&y%2!=0){sum+=(even*y); odd+=even; even=0;cout<<sum<<el;continue;}
            else if(x==1 && y%2==0){sum+=(odd*y);cout<<sum<<el;continue;}
            else{
                sum+=(odd*y);
                even+=odd;
                odd=0;
                cout<<sum<<el;
                continue;
            }
        }
        
    }
}