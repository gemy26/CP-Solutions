#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  long long a[n];
  for (int i = 0; i < n; ++i)
  {
   cin >> a[i];
  }
  bool f1 = false,f2 = false;
  long long gcdeven=a[0],gcdodd=a[1];
  for (int i = 0; i < n; i++)
  {
   if(i%2==0)
    gcdeven = __gcd(gcdeven,a[i]);
   else
    gcdodd = __gcd(gcdodd,a[i]);
  }
  for (int i = 0; i < n; i+=2)
  {
   if(a[i] % gcdodd == 0){f1 = true; break;}
  }
  for (int i = 1; i < n; i+=2)
  {
   if(a[i] % gcdeven == 0){f2 = true; break;}
  }
  
  //cout<<f1<<' '<<f2<<endl;
  if(f1 && f2){cout<<0<<endl; continue;}
  else if(f1 ){cout<<gcdeven<<endl;}
  else
   cout<<gcdodd<<endl;
 
 }
}