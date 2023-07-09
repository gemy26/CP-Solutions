#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void sooort(string s[],int n) {
    for(int i=0;i < n;i++) {
        for(int  j=i+1;j < n;j++) {
            int  a=s[i].size(),b=s[j].size();
            if(a>b) {
                swap(s[i],s[j]);
            }
        }
    }
}
int main() {
  int n;
  cin>>n;
  string s[n];
    for (int i = 0; i < n ; ++i) {
        cin>>s[i];
    }
    sooort(s,n);
 
    for (int i = 1; i < n ; ++i) {
 
        if(s[i].find(s[i-1])==-1){cout<<"NO";
            return 0;}
    }
    cout<<"YES"<<endl;
    for (int i = 0; i < n ; ++i) {
        cout<<s[i]<<endl;
    }
 
}