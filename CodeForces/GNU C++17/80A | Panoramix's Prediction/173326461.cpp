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
 
int nextprime(int x){
bool check = true;
x++;
while(check)
{
    if(isprime(x)){check=false; }
    else
        x++;
}
return x;
 
}
 
int main() {
    int x,y;
    cin>>x>>y;
    if(isprime(x)&&nextprime(x)==y){cout<<"YES";}
    else
        cout<<"NO";
   //cout<<isprime(2);
    
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 