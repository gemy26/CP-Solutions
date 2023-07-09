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
 ll n,x;
 cin>>n>>x;
 ll res = x;
 vector<ll>v;
 while(x >= n)
 {
     if(x % 10 == 1){x /= 10; v.push_back(x);}
     else if(x % 2 != 0 ){break;}
     else {
         x /= 2;
         v.push_back(x);
     }
if(x==n) break;
 }
if(x==n) {
    cout << "YES\n";
    cout << v.size() + 1 << el;
    for (int i = v.size() - 1; i >= 0; --i) {
        cout << v[i] << ' ';
    }
    cout << res;
}
else
    cout<<"NO";
 
}