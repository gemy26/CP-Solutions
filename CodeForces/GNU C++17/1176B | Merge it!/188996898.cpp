#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int t;
cin>>t;
while(t--){
 int n;
 cin >> n;
 int a[n];
 int cnt =0,sum=0,one =0 ,two =0;
 for (int i = 0; i < n; ++i)
 {
  cin >> a[i];
  if(a[i] % 3 == 0)
   cnt++;
  else  if(a[i]%3==1)
   one++;
  else if(a[i]%3==2)
   two++;
 
 }
 cnt +=min(one,two)+((max(one,two)-min(one,two))/3);
 cout<<cnt<<endl;
}
}