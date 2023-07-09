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
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
 
 
 
int main() {
    int t;
    cin>>t;
 
    while(t--) {
     int a,b,c;
     cin>>a>>b>>c;
     int one=(a-1)  ,two=(c-1)+abs(b-c);
     if(one==two){cout<<3<<endl; }
     else if(one>two){cout<<2<<endl;}
     else
         cout<<1<<endl;
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 