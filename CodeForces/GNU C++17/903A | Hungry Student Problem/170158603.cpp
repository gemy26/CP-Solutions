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
   while(t--)
   {
       int x;
       cin>>x;
       while (x>0)
       {
           if(x<3){cout<<"NO"<<el;
               goto here;}
 
            if(x%3 == 0)
               x-=3;
            else 
                x-=7;
       }
       if(x==0) {
           cout << "YES" << el;
       }
       else
           cout<<"NO"<<el;
here:
       int g;
   }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 