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
   string s,res;
   cin>>s;
   int x;
    for (int i = 0; i < s.size() ; ++i) {
      if(s[i]-'0'<(9-(s[i]-'0'))){res+=s[i];}
      else
          res+= 9-(s[i]-'0')+'0';
    }
    if(res[0]=='0'){res[0]=s[0];}
    
    cout<<res;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 