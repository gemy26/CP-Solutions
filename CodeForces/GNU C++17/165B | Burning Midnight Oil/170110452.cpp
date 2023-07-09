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
int n,k;
int cnt = 0;
bool fun(int val){
    cnt = 0;
    for (int i = 0; ; ++i)
    {
        if(val/pow(k,i) == 0 )
            break;
        cnt+=val/pow(k,i);
    }
    if(cnt>=n)
        return true;
    else
        return false;
}
int main() {
    int res;
    cin>>n>>k;
 
    int l=-1,r=n;
    while(r>l+1)
    {
        int m = (r+l)/2;
        if(fun(m)){
            r=m;
        }
        else
            l=m;
    }
    cout<<l+1<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 