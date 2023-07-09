#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  el '\n'
#define all(x) x.begin(),x.end()
 
int main(){
int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
   cin >>a[i];
  }
  int cnt = 0;
 for (int i = 1; i < n; ++i)
 {
  if(a[i]%2==0 && a[i-1]%2==0)cnt++;
  else if(a[i]%2==1&&a[i-1]%2==1)cnt++;
 }
 
cout<<cnt<<endl;
 }
}
 