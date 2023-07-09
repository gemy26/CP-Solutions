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
 set<int>st;
 int n;
 cin>>n;
 n*=2;
 int cnt = 0;
 int res = 0;
    for (int i = 0; i < n ; ++i) {
        res = max(res,cnt);
        int z; cin>>z;
        if(!st.count(z)) {
            st.insert(z);
            cnt++;
        }
        else{
            st.erase(z);
            cnt--;
        }
    }
    cout<<res;
}