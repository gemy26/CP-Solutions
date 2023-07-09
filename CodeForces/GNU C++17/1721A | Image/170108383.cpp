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
   int t;
   cin>>t;
   char ch[2][2];
   
   while(t--)
   {
    int cnt = 0;
    int frq[28]={0};
for (int i = 0; i < 2; ++i)
{
    for (int j = 0; j < 2; ++j)
    {
        cin>>ch[i][j];
    }
}
for (int i = 0; i < 2; ++i)
{
    for (int j = 0; j < 2; ++j)
    {
        frq[ch[i][j]-'a']++;
    }
}
for (int i = 0; i < 28; ++i)
{
    if(frq[i])cnt++;
}
cout<<cnt-1<<endl;
 
   }
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 