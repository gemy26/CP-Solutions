#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
   int n;
   cin>>n;
   int a[n];
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }
    sort(a,a+n);
 int cnt = 0;
 int x;
 
    for (int i = 0; i < n ; ++i) {
       x= upper_bound(a,a+n,a[i]+5)- lower_bound(a,a+n,a[i]);
       cnt = max(cnt ,x);
    }
    cout<<cnt;
 
}