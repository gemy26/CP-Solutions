#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n,cnt = 0;
  cin>> n;
  int a[n+1];
  a[0]=0;
  for (int i = 1; i < n+1; ++i)
  {
   cin >> a[i];
  }
   int current = a[1];
  for (int i = 1; i < n+1; ++i)
  {
      if(a[i] > current)
          current = a[i];
    if(current == i)cnt++;
 
 
  }
   cout << cnt;
}
 