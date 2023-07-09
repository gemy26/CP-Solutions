#include <iostream>
#include<bits/stdc++.h>
#define ll long long
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
 string  n;
 cin>>n;
 int cnt = 0 ;
 string res;
 string s = (n);
 
 
    while (s.size() > 1)
    {
        ll sum = 0;
        for (int i = 0; i < s.size() ; ++i) {
            sum += s[i]-'0';
        }
        s = to_string(sum);
        cnt++;
    }
    cout<<cnt;
 
 
}