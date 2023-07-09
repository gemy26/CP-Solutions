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
 int t;
 cin>>t;
 int m = 0,c = 0, f = 0;
    while (t--)
    {
int x,y;
cin>>x>>y;
if(x>y){m++;}
else if(y>x){c++;}
else
    f++;
    }
    if(c>m ){cout<<"Chris"; return 0;}
    if(m>c ){cout<<"Mishka"; return 0;}
    else
        cout<<"Friendship is magic!^^";
}