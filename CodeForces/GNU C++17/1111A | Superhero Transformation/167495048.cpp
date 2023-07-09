#include <iostream>
#include<bits/stdc++.h>
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
 string s1,s2;
 set<char>st={'a','e','i','o','u'};
 cin>>s1>>s2;
 int  l = 0;
 if(s2.size()!=s1.size()){cout<<"No"; return 0;}
 else
 {
     for (int i = 0; i <  s1.size() ; ++i) {
         if(st.count(s1[i]) &&st.count(s2[l])){l++;}
         else if(!st.count(s1[i]) &&!st.count(s2[l])){l++;}
         else{cout<<"No"; return 0;}
     }
     if(l==s1.size()){cout<<"Yes";}
 }
}