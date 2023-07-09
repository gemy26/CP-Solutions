#include<bits/stdc++.h>
using namespace std;
vector<int>a;
long long n , x,cnt=0;
 
int main() {
 
    cin >> n;
   a.resize(n);
    for (int i = 0; i < n ; ++i) {
         cin >> a[i];
    }
    for (int i = 0; i < n ; ++i) {
        cin >> x;
        a[i] -= x;
    }
    sort(a.begin(),a.end());
 
    for (int i = 0; i < n-1 ; ++i) {
       // if( *(upper_bound(a.begin()+i+1,a.end(),-a[i]) ) )
         cnt += a.end() - (upper_bound(a.begin()+i+1,a.end(),-a[i]) )  ;
 
    }
    cout << cnt;
}