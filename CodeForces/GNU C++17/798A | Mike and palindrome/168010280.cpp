#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define el '\n'
//------is prime---------//
bool isprime(int x)
{
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}
bool IsPrime(int n)
{
    if(n == 1)
        return false;
    for(int i = 2 ; i*i <= n ; i++)
        if( ! n % i )
            return false;
    return true;
}
 
using namespace std;
void ssbs(string s[],int n) {
    for(int i=0;i < n;i++) {
        for(int  j=i+1;j < n;j++) {
            int  a=s[i].size(),b=s[j].size();
            if(a>b) {
                swap(s[i],s[j]);
            }
        }
    }
}
bool compare(string &s1 ,string &s2){
    return s1.size() < s2.size();
}
int main() {
   string s;
   cin>>s;
   int l = 0,r = s.size()-1;
   int cnt = 0;
   string g = s;
    std::reverse(g.begin(), g.end());
    if (s == g && s.size()%2){cout<<"YES"; return 0;}
   else {
       while (r >= l) {
           if (s[l] != s[r]) { cnt++; }
               l++,r--;
       }
   }
   if ( cnt == 1 ){cout<<"YES";}
   else
       cout<<"NO";
}