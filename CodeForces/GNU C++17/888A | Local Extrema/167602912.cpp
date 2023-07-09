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
 int n;
 cin>>n;
 int arr[n];
    for (int i = 0; i < n ; ++i) {
        cin>>arr[i];
    }
int cnt = 0;
    for (int i = 1; i < n-1 ; ++i) {
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1] ) cnt++;
        else if(arr[i+1] > arr[i] && arr[i-1] > arr[i]) cnt++;
    }
    cout<<cnt;
 
}