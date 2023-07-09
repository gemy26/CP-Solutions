#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;
//------is prime---------//
bool isprime(int x)
{
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}
//--------GCD---------------//
 
//-----------------------//
const int AK=5e5+5;
const long long VVB=5e9+5;
//----------------------//
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x= n;
        vector<int>cnt;
        int y=9;
        int res = 0;
        if(n<=9){cout<<n<<endl; continue;}
        
        else
        {
            
            
           for(int i=0 ;i<=10;i++)
           {
            if(res < x){n-=y; res+=y; cnt.push_back(y); --y;}
           if(y>n){y=n;}
           }
 
        }
        sort(cnt.begin(),cnt.end());
        for (auto i : cnt)
        {
            cout<<i;
        }
        cout<<el;
        
}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 