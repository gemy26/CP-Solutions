#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int t;
 cin >> t;
 while(t--){
    int l,r;
  cin >> l >> r;
  if(r+l<=10){cout<<r-l<<'\n'; continue;}
  else{
   int res = 0;
   
   while(l||r){
    res+=(r-l);
    r/=10,l/=10;
   }
   cout<<res<<'\n';
  }
 }
 
}
 