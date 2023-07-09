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
    string timur = "Timur";
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        string s1, s2;
        cin >> s1 >> s2;
        int cnt = 0;
        int flag = 0;
        for (int i = 0; i < x; ++i) {
            if (s1[i] == 'B' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'B')
            {   s1[i]='0';s2[i]='0';}
 
        }
             if(s1==s2){cout<<"yes"<<el;}
             else
                 cout<<"NO"<<el;
//cout<<s1<<' '<<s2<<el;
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 