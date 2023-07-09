#include <bits/stdc++.h>
#include<string.h>
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
    int n,c;
    cin>>n>>c;
    deque<int>a;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int res=0;
    for (int i = 0; i < n-1 ; ++i) {
        res = max(a[i]-a[i+1]-c,res);
    }
    cout<<res;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 